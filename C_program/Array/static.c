//static storage class
#include<stdio.h>
static int n3=10;
int sum(int n1,int n2){
    int res=n1+n2;
      printf("\n Res=%d",res);
}
int main(){

    printf("\n N3=%d",n3+20);
    sum(20,30);
}