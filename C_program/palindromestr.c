// palindrome string:
#include<stdio.h>
#include<string.h>
int main(){
    char str[10];
    int len,i,temp=0;
    printf("Enter string:");
    gets(str);
    len=strlen(str);
    for(i=0;i<len/2;i++){
        if(str[i]!=str[len-1-i]){
           temp=1;
           break;
         }
    }
    if(temp==1){
        printf("Not palindrome");
    }
    else{
        printf("palindrome");
    }
}