// file data to be read on terminal
#include<iostream>
#include<fstream>
using namespace std;
int main(){
   
   string arr[500];
    ifstream fin("G:\\ttsbatch3_4(ramht)\\c++prg\\theory\\class.txt");
    for(int i=0;i<=500;i++){
        fin>>arr[i];
    }
    fin.close();
   for(int i=0;i<500;i++){
    cout<<" " <<arr[i];
    }
    //cout<<" "<<endl;
}