// file handling : program to create a new file using the program
#include<stdio.h>
int main(){
    FILE *ptr;
 // char str[50]="Programing is creative";
    int rollno;
    char name[20];
    int percent;

    printf("Enter rollno:");
    scanf("%d",&rollno);
    printf("Enter name:");
   scanf("%s",&name);
    printf("Enter percent:");
    scanf("%d",&percent);
    // opening a new file
    ptr=fopen("G:\\ttsbatch3_4\\C_program\\student.txt","w+");
    if(ptr==NULL){
        printf("File not created.");
    }
    else{
        printf("File created.");
        fprintf(ptr,"\nRollno=%d",rollno);
        fprintf(ptr,"\nName=%s",name);
        fprintf(ptr,"\nPercentage=%d",percent);
        printf("Data entered successfully..");
    }
    fclose(ptr);
  }