// fibonacci series: 0,1,1,2,3,5,8,13,21,34....
// #include<iostream>
// using namespace std;
// int main(){
//     int n1=0,n2=1,n;
//     int count=2;
//     cout<<"Enter end number :";
//     cin>>n;
//     cout<<"Fibonacci series:"<<endl;
//     cout<<n1<<","<<n2;
//     while(count<n){
//         int temp=n1+n2;
//         n1=n2;
//         n2=temp;
//         cout<<","<<temp<<",";
//     count++;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int n1=0,n2=1,n;

    cout<<"Enter end number :";
    cin>>n;
    cout<<"Fibonacci series:"<<endl;
    for(int i=0;i<=n;i++){
        cout<<n1<<",";
        int temp=n1+n2;
        n1=n2;
        n2=temp;
    }
}