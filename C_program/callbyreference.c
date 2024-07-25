// call by reference 
//call by value :
#include<stdio.h>
int swap(int *a,int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    printf("\n After swapping the value of a=%d  and b=%d ",*a,*b);
}
int main(){
    int a,b;
    printf("Enter values:");
    scanf("%d %d",&a,&b);
    printf("\n Before calling the function :\n a=%d \n b=%d",a,b);
    swap(&a,&b);
    printf("\n After calling function :\n a=%d \n b=%d",a,b);
}