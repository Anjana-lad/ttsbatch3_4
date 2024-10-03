// create a file to store the data in any external file.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int id;
    string name;
    cout<<"Enter id:";
    cin>>id;
    cout<<"Enter name:";
    cin.ignore();
    getline(cin,name);
    ofstream fout("G:\\ttsbatch3_4(ramht)\\c++prg\\student.txt");
    fout<<id<<"\n"<<name;
    fout.close();
}