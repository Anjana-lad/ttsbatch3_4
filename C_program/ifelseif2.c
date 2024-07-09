// whether character is vowel or consonant
#include<stdio.h>
int main(){
    char ch;
    printf("Enter character:");
    scanf("%c",&ch);
    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        printf("It is a vowel.");
    }
    else{
        printf("It is consonant");
    }
}