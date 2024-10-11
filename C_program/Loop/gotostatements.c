// goto statements : to jump from one place to other
// //got syntax:
// label_name:
// //statament ;
// statements ;
// goto label_name;

#include<stdio.h>
int main(){
    int num;
label:
    printf("\n press 1 to exit (Enter number):");
    scanf("%d",&num);
    if(num!=1){
        printf("\n You enter %d \n ",num);
        goto label;
    }
    else{
        printf("\n End of program.");
    }
}