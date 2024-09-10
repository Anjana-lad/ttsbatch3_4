// default constructor. : constructor having no parameter.
#include<iostream>
using namespace std;
class Points{
    int dance;
    int singing;
    public:
    Points(){  // default constructor
     cout<<"enter value of dance:";
     cin>>dance;
     cout<<"Enter value of singing:";
     cin>>singing;
    }
    void show(){
        cout<<"Dance="<<dance<<endl;
        cout<<"Singing="<<singing<<endl;
    }   
};
int main(){
    Points pp; // class_name object_name;
    pp.show();  // object_name member function name();
}