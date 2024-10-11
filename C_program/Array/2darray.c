// 2-dimensional array which consist of 2 size i.e for rows and columns
//data-type arr_name [row size][col size];
#include<stdio.h>
int main(){
    int arr[2][3]={{12,25,74},{85,96,32}};
    for(int row=0;row<2;row++){
        printf("\n");
        for(int col=0;col<3;col++){
            printf("%d \t",arr[row][col]);
        }
    }
}