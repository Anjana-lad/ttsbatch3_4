// multiple inheritance :in this we have several base class and one child class of that bases class.
#include<iostream>
using namespace std;
class Dad{
    public:
    int d_money;
    public:
    void getd_money(){
        cout<<"Enter d_money:";
        cin>>d_money;
    }
    void set_d(){
        cout<<"Dad's money:"<<d_money<<endl;
    }
};
class Mom{
    public:
    int m_money;
    public:
    void getm_money(){
        cout<<"Enter m_money:";
        cin>>m_money;
    }
    void set_m(){
        cout<<"Mom's money:"<<m_money<<endl;
    }
};
class child :protected Mom,Dad{
    public:
    int total;
    public:
    void get_data(){
        getd_money();
        getm_money();
    }
    void result(){
        set_d();
        set_m();
        total=d_money+m_money;
        cout<<"Total money ="<<total<<endl;
    }
};
int main(){
    child ch;
    ch.get_data();
    ch.result();
}