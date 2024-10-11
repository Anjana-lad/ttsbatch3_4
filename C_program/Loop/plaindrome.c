//palindrome numbers are numbers which are read form both side it will be same.
//123321
#include<stdio.h>
int main(){
    int num,original_num,rem,rev=0;
    printf("Enter number:");
    scanf("%d",&num);
    original_num=num;
    while(num>0){
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }

    printf("Reverse number=%d",rev);
    if(rev==original_num){
        printf("\n The number is palindrome.");
    }
    else{
        printf("\n Not a palindrome number.");
    }
}