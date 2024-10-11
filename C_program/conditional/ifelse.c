//if else statements:
/* syntax:
if(condition){
    statements;
}
else{
    statements
} */      

// WAP to check weather the number is positive or negative
#include<stdio.h>
int main(){
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    if(num>=0){
        printf("Number is positive.");
    }
    else{
        printf("Number is negative.");
    }
}