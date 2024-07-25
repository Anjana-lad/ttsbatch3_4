// function categories :
//1. function with no arguments(parameter) no return statements
//2. function with no arguments with return statements
//3. function with arguments no return statements.
//4. function with arguments with return statements.

// 1 no argument no return

#include<stdio.h>
void sum(){
    int a,b,res;
    printf("Enter a and b");
    scanf("%d %d",&a,&b);
    res=a+b;
    printf("Result(a+b)=%d",res);
}
int main(){
    sum();  // calling function
}