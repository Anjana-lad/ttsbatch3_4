// aggregation : it is a process to access the base class member in child class by giving a reference to that. HAS-A relation to the base class.
#include<iostream>
using namespace std;
class Address{
    public:
    string city,state;
    public:
    Address(string c,string s){
        this->city=c;
        this->state=s;
    }
};
class employee{
    private:
    Address *add;  // HAS- A relationship
    public:
    int eid;
    string name;
    public:
    employee(int id,string nm,Address *add){
        this->eid=id;
        this->name=nm;
        this->add=add;
    }
    void display(){
        cout<<"Employee details:"<<endl;
        cout<<"Eid="<<eid<<endl<<"Name="<<name<<endl;
        cout<<"City="<<add->city<<endl<<"State="<<add->state<<endl;
    }
};
int main(){
    Address ad("Surat","Gujarat");  // address object
    employee emp(1,"Kevin",&ad);   // employee obj
    emp.display();
}