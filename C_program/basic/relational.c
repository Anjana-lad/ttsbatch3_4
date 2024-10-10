//relational operators=> ==,!=,>,<,>=,<=
#include<stdio.h>
int main(){
    int num1,num2,res;
    printf("Enter numbers:");
    scanf("%d %d",&num1,&num2);
    printf("Num1=%d \n num2=%d",num1,num2);
    res=(num1>num2);
    printf("\n Greater then =%d",res);
    printf("\n less then :Num1<num2=%d",num1<num2);
    printf("\n less then equal to:Num1<=num2=%d",num1<=num2);
    printf("\n greater then equal to :Num1>=num2=%d",num1>=num2);
    printf("\n double equal to :Num1==num2=%d",num1==num2);
    printf("\n Not equal to :Num1!=num2=%d",num1!=num2);
}