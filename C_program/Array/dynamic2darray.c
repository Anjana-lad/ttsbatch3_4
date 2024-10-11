// dynamic array to take input from user.
#include<stdio.h>
int main(){
    int arr[2][3];
    int row,col;
    printf("Enter array elements:");
    for(row=0;row<2;row++){
        for(col=0;col<3;col++){
            scanf("%d",&arr[row][col]);
        }
    }
    printf("\n Printing array:\n");
    for(row=0;row<2;row++){
        printf("\n");
        for(col=0;col<3;col++){
            printf("%d \t",arr[row][col]);
        }
    }
}