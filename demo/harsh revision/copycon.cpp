//copy constructor
#include<iostream>
using namespace std;
class value{
     public:
     int num;
    // public:
     value(){
        cout<<"Enter number:";
        cin>>num;
     }
     value(const value &obj){  //copy constructor
        num=obj.num;
     }
     void show(){
        cout<<"num="<<num<<endl;
     }
};
int main(){
    value v1;
    value v2=v1;
    v2.show();
}