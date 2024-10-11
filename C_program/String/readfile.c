// reading a file
#include<stdio.h>
int main(){
    char str[100];
    FILE *pt;
    pt=fopen("G:\\ttsbatch3_4\\demo\\test.txt","r+");
    if(pt==NULL){
        printf("File not found.");
    }
    else{
        printf("File found");
        while(fgets(str,100,pt)!=NULL){
            printf("\n %s",str);
        }
    }
    fclose(pt);
}