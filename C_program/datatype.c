//datatype  in c program
#include<stdio.h>
int main(){
    int num; //variable declaration
    int num1 ;
   // num=5; //variable initialization
  int res;
  printf("\n Enter numbers:");
  scanf("%d %d",&num,&num1);
  printf("\n Num=%d",num);
  printf("\n Num1=%d",num1);
  res= num+ num1;
  printf("\n Result=%d",res);
}

 //formatted input and output function 
//1.printf() output function
//2.scanf() input function

//format specifier 
//int  == %d
//char == %c
//float  ==%f
//long  ==%lf
//double  ==%lf

//escape sequence
// \n new line
// \t tab 
// \f form feed
// \a audio

// comments  to show the description about the code.
/*  2 types of  comments 
1. single line comments  //
2. multiline comments  /* */ 