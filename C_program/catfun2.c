// function with arguments no return statements
#include<stdio.h>
void sub(int a,int b){
    int res;
    res=a-b;
    printf("A-b=%d",res);
}
int main(){
    int a,b;
    printf("Enter numbers:");
    scanf("%d %d",&a,&b);
    sub(a,b);
}