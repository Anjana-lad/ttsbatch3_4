// manipulators like setw(),setfill(),setprecision() etc.
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int num;
    double f=1.314587;
    cout<<"Enter number:";
    cin>>num;
    cout<<"Num="<<setw(5)<<num<<endl;
    cout<<"setfill"<<endl;
    cout<<"num="<<setfill('x')<<setw(10)<<num<<endl;
    cout<<"Set precision"<<endl;
    cout<<"num="<<setprecision(9)<<f<<endl;
    cout<<fixed;
    cout<<"num="<<setprecision(4)<<f<<endl;
}