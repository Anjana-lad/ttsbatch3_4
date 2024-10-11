//logical operator => &&(and), ||(or), !(not)

#include<stdio.h>
int main(){
    int a,b,res;
    int c =20;
    printf("Enter number:");
    scanf("%d %d",&a,&b);
    res=(a<b) &&(a>=10);
    printf("Logical and:=%d",res);
    res= (a>=20) || (b<=30);
    printf("\n Logical OR=%d",res);
    res= !(c==20);
    printf("\n Logical not of C=%d",res);
}