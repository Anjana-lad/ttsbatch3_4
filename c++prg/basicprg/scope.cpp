// use of scope resolution operator.
#include<iostream>
using namespace std;
int p=30; // global variable
int main(){
    int p=20; //local variable
    int r=10;
    cout<<"Value of p+r="<<p+r<<endl;
    cout<<"Value of global variable:::p+p+r="<<::p+p+r<<endl;
}