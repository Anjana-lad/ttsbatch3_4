// diamond problem
#include<iostream>
using namespace std;
int p,q,r,s;
class P{
    public:
    void getpq(){
        cout<<"P:";
        cin>>p;
        cout<<"Q:";
        cin>>q;
    }
    void showpq(){
        cout<<"P="<<p<<endl<<"Q="<<q<<endl;
    }
};
class Q: virtual public P{
    public:
    void getr(){
        cout<<"R:";
        cin>>r;
    }
    void showr(){
        cout<<"R="<<r<<endl;
    }
};
class R: virtual public P{
    public:
    void gets(){
        cout<<"S:";
        cin>>s;
    }
    void shows(){
        cout<<"S="<<s<<endl;
    }
};
class S:public Q,R{
    public:
    int t;
    public:
    void total(){
        getpq();
        getr();
        gets();
        t=p+q+r+s;
    }
    void showall(){
        showpq();
        showr();
        shows();
        cout<<"Total="<<t<<endl;
    }
};
int main(){
    S ss;
    ss.total();
    ss.showall();
}