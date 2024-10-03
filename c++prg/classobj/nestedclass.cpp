// nested class : class inside class
#include<iostream>
using namespace std;
class A{
    public:
    void show(){
        cout<<"This is class A"<<endl;
    }
    class B{
        public:
        void show(){
            cout<<"This is class B"<<endl;
        }
    };
};
int main(){
    A a;
    a.show();
    A::B b;  //to call the inner class made the object with the help of scope resoultion operator
    b.show();

}