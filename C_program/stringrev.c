// without using string function doing string reverse
#include<stdio.h>
#include<string.h>
int main(){
    char str[10];
    int len;
    printf("Enter string:");
    gets(str);
    len=strlen(str);
    for(int i=len-1;i>=0;i--){
        printf("%c",str[i]);
    }
}