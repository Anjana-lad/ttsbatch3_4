//factorial number= 7!=>7*6*5*4*3*2*1= 720;
#include<stdio.h>
int main(){
    int num,fact=1;
    printf("Enter number:");
    scanf("%d",&num);

    while(num>1){
        fact=fact*num;
        num--;
    }
    printf("Factorial of %d=%d",num,fact);
}