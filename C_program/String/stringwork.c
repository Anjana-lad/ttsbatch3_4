// get string get  from user 
#include<stdio.h>
#include <ctype.h>
#include<string.h>
int swap_case(char *str) {
    while (*str) {
        if (islower(*str))
            *str = toupper(*str);
        else if (isupper(*str))
            *str = tolower(*str);
        str++;
    }
}
int main(){
    char str[50];
    printf("Enter string:");
    fgets(str,50,stdin);
    printf("%s",str);
      swap_case(str);
    printf("\n Swapcase string =%s",str);
}