//patter pascal triangle n=n*(row-col)/col
//      1
//     1 1
//    1 2 1
//   1 3 3 1
//  1 4 6 4 1
#include<stdio.h>
int main(){
    int row,col,space,n;
    for(row=1;row<=5;row++){
        for(space=1;space<5-row;space++){
            printf(" ");
        }
        n=1;
        for(col=1;col<=row;col++){
            printf(" %d ",n);
         n = n * (row-col)/col;
        }
        printf("\n");
    }
}