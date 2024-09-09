// local class is the class which is defined inside the main function.
#include<iostream>
using namespace std;
int main(){
    class employee{
        public:
        int id;
        float salary;
        public:
         void getdata(){
            cout<<"Enter id and salary:";
            cin>>id>>salary;
         }
         void show(){
            cout<<"id="<<id<<"\n Salary:"<<salary<<endl;
         }
    };  //class over
    employee emp; //class object
    emp.getdata();
    emp.show();
}