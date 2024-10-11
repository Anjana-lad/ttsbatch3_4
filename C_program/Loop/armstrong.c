//armstrong number:
//=153=1*1*1+5*5*5+3*3*3 = 153
//1634 = 1*1*1*1+6*6*6*6+3*3*3*3+4*4*4*4  =1634 

#include<stdio.h>
int main(){
    int num,ori_num,rem,sum=0;
    printf("Enter number:");
    scanf("%d",&num);
    ori_num=num;
    while(num!=0){
        rem=num%10;
        sum+=rem*rem*rem;
        num/=10;
    }
    if(sum==ori_num){
        printf("Number is armstrong number. ");
    }
    else{
        printf("Not an armstrong number.");
    }
}