//ternary operator(conditional operator) =>(condition) ?true:false
#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter numbers:");
    scanf("%d %d",&num1,&num2);
    (num1>num2)?printf("Num1 is greater"):printf("num1 is not greater");
}