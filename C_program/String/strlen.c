// string length without using string function strlen()
#include<stdio.h>
int main(){
    char str[20];
    printf("Enter string:");
    gets(str);
    int len=0;
    printf("\n String=%s",str);
     for(int i=0;str[i]!='\0';i++){
        len++;
     }
     printf("\n Length of string=%d",len);
}