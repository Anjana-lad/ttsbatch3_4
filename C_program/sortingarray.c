//sorting 1-d array (ascending or in descending form)
#include<stdio.h>
int main(){
    int num[5]={74,52,96,36,11};
    printf("Printing array:\n");
    for(int i=0;i<5;i++){
        printf("%d \t",num[i]);
    }
    //logic for ascending ;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(num[i] < num[j]){ 
                int temp=num[j];
                num[j]=num[i];
                num[i]=temp;
            }
        }
    }
    // for printing the ascending array
    printf("Printing ascending array\n");
    for(int i=0;i<5;i++){
        printf("%d \t",num[i]);
    }
}