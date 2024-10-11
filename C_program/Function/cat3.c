// function no arguments with return statements
#include<stdio.h>
int multiply(){
    int a,b;
    printf("Enter numbers;");
    scanf("%d %d",&a,&b);
    return a*b;
}
int main(){

   printf("Multiplication of two numbers=%d",multiply());
}