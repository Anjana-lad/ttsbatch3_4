// overload operator [];
#include<iostream>
using namespace std;
class array{
    public:
    int arr[3];
    public:
    array(int i,int j,int k){
        arr[0]=i;
        arr[1]=j;
        arr[2]=k;
    }
    int operator [] (int i){
         return arr[i];
    }
};
int main(){
    array ar(40,50,60);
   // cout<<ar[0]<<endl;
    cout<<ar[1]<<endl;
    //cout<<ar[2]<<endl;
}