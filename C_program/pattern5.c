//pattern 5
// 0
// 1 0
// 0 1 0
// 1 0 1 0
// 0 1 0 1 0

#include<stdio.h>
int main(){
    int row,col;
    for(row=1;row<=5;row++){
        for(col=1;col<=row;col++){
            printf("%d ",(row+col)%2);
        }
        printf("\n");
    }
}