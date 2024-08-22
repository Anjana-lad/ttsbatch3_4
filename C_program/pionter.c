// pointer : It stores the address of another variable.
#include<stdio.h>
int main(){
    int a=10;
    int *ptr;
    ptr=&a;  //referencing pointer.
    printf("address of variable a=%d",ptr);
    printf("\n value at ptr is=%d",*ptr);
    a=*ptr; // dereferencing pointer.


}