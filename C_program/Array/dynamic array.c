//dynamic array : where user gives the value to the array.
#include<stdio.h>
int main(){
    int num_arr[7]; // array declaration;
    printf("Enter values for array:");
    for(int i=0;i<7;i++){
        scanf("%d",&num_arr[i]);
    }
    printf("\n Values of array:");
    for(int i=0;i<7;i++){
        printf("num_arr[%d]=%d \n",i,num_arr[i]);
    }
}