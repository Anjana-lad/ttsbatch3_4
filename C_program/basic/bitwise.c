//bitwise operator=> &,|,~,^,>>,<<
#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter numbers:");
    scanf("%d %d",&num1,&num2);
    int res= num1 & num2;
    printf("\n Bitwise AND =%d",res);
    int or_1= num1|num2;
    printf("\n Bitwise OR=%d",or_1);
    int ex_or=num1 ^ num2;
    printf("\n Exculsive Or=%d",ex_or);
    int neg= ~num2;  //~num= -(num+1);
    printf("\n Bitwise complement=%d",neg);
}