//assignment operators=> +=,-=,/=,*=,%=;
//res=a+b;
//a=a+b=>a+=b

#include<stdio.h>
int main(){
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    printf("\n Num=%d",num);
    num+=10;  // => num=num+10;
    printf("\n Num=%d",num);
    num*=3;  // num=num*3;
    printf("\n Num=%d",num);
    num-=4;   //num=num-4;
    printf("\n Num=%d",num);
    num/= 2;  //num=num/2;
    printf("\n Num=%d",num);
}