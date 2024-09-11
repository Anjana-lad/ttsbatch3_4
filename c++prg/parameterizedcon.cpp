// parameterized constructor : constructor having parameter
#include<iostream>
using namespace std;
class Add_fun{
    int a,b;  // data member;
    public:
    Add_fun(int num1,int num2){   // parametrized constructor.
        a=num1;
        b=num2;
    }
    int show(){
        cout<<"Total="<<a+b<<endl;
    }
};
int main(){
    int a,b;
    cout<<"Enter a and b:";
    cin>>a>>b;
    Add_fun af(5,9);  // obj 1
    af.show();
    Add_fun af1(a,b); // ob2
    af1.show();
}