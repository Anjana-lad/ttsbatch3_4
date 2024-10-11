//1. first 10 prime number using loop
//2. find average of 10 numbers using loop and array.
//3. write a program to find area of circle or square (using function) and result should be as per users choice.

/*string: group of character is called string.
 In string there are in-built function.
 all the string function are in the header file string.h
 string function:=
 1. strlen : string length
 2. strlwr : string lowercase
 3. strupr : string upper case.
 4. strcmp : string compare 
    str1==st2 :  0
    str1>str2 :  1
    str1<str2 : -1
5. strcpy : string copy
 ==strcpy(destination_str,source string);
6. strstr : string sub string
== strstr(str,"sub string");
 7. strrev : string reverse
 == strrev(str);
 8. strchr() : string with that character.
   == strchr(str,'character');
9. strcat() :string concatenate 
 == strcat(str1,str2);

*/

#include<stdio.h>
#include<string.h>
int main(){
   int len;
   char str[20],str2[20],str3[20],str4[20]="I love programming";
   printf("Enter string1:");
   gets(str);
   printf("\n String1=%s",str);
   printf("\n Enter string2:");
   scanf("%[^\n]s",&str2);
   printf("string2=%s",str2);
   len=strlen(str);
   printf("\n Length of string1=%d",len);
   // string to lower case
    printf("\n String to lower=%s",strlwr(str2));
    // string to upper case
    printf("\n String to upper =%s",strupr(str));
    // string compare 
    printf("\n String compare = %d",strcmp(str,str2));
   // string copy
   printf("\n String copy=%s",strcpy(str3,str));
   printf("\n String 3=%s",str3);
  // string reverse
  printf("\n reverse string=%s",strrev(str3));
  // string inside string
  printf("\n String inside string=%s",strstr(str4,"ove"));
   // string character
   printf("\n String having character:%s",strchr(str4,'l'));
   // string concatenate
   printf("\n String concatenate:%s",strcat(str,str2));
   // strset;
   printf("\n String set=%s",strset(str,'x'));
}