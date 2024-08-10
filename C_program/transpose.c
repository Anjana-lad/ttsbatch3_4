// transpose of array elements 
//ip
// 1 2 3
// 4 5 6   
// 7 8 9
// op  1 4  7
//     2 5  8
//     3 6  9

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
    printf("\n Array elemets:\n ");
    for(row=0;row<2;row++){
        printf("\n");
        for(col=0;col<3;col++){
            printf("%d \t ",arr[row][col]);
        }
    }
    //transpose of array
    printf("\n Array transpose\n");
    for(col=0;col<2;col++){
        printf("\n");
        for(row=0;row<3;row++){
            printf("%d \t",arr[row][col]);
        }
    }
}