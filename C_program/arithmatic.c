//arithmetic operators => +,-,/,*,%,++,--
#include<stdio.h>
int main(){
    int a,b,res;
    printf("Enter a and b:");
    scanf("%d %d",&a,&b);
    printf("A=%d \n B=%d",a,b);
    res=a+b;
    printf("\n Addition a+b =%d",res);
    res=a-b;
    printf("\n Subtraction a-b =%d",res);
     res=a*b;
    printf("\n Multiplication a*b =%d",res);
     res=a/b;
    printf("\n Division a/b=%d",res);
     res=a%b;
    printf("\n Modulo a%b =%d",res);
    a++;
    printf("\n A=%d",a);
    --b;
    printf("\n B=%d",b);

}    


// ++(increment) ,--(decrement)
// 1.pre increment  ++a   ,--a
// 2. post increment  a++  ,a--

// ++ =>+ by 1 a++ =>a+1;   a--=>a-1