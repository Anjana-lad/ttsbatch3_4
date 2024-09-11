// copy constructor : it creates the  copy of object of other constructor
#include<iostream>
using namespace std;
class value{
    public:
    int a,b;
    public:
    value(){   // constructor
        cout<<"Enter n:";
        cin>>a;
        cout<<"Enter n2:";
        cin>>b;
    }
    // classname (class name &objename){part}
    value(value &obj){
        a=obj.a;
        b=obj.b;
    }
    void print(){
        cout<<"Value of a= "<<a<<endl;
        cout<<"Value of b=" <<b;
    }
};
int main(){
    value v1;  // default constr obj
    value v2=v1;  // copy constr obj
    v2.print();
}