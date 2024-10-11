// STRING COMPARE WITHOUT using string strcmp().
#include<stdio.h>
int main(){
    char str1[10],str2[10];
    int i=0;
    printf("enter string 1:");
    gets(str1);
    printf("String 2:");
    gets(str2);
  //  for(i=0; str1[i]==str2[i] && str1[i]!='\0';i++);
    while(str1[i]==str2[i] && str1[i]!='\0'){
        i++;
    }
    if(str1[i]==str2[i]){
        printf("Both are same");
    }
    else if(str1[i]>str2[i]){
        printf("string1 is greater");
    }
    else{
        printf("String2 is greater");
    }
}