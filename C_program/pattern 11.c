//pattern 11
//        *
//      * * *
//    * * * * *
//   * * * * * * *
// * * * * * * * * *

#include<stdio.h>
int main(){
    int n,row,col,space;
    printf("Enter rows");
    scanf("%d",&n);
    for(row=1;row<n;row++){
        for(space=n;space>=row;space--){
            printf(" ");
        }
        for(col=1;col<=2*row-1;col++){
            printf("*");
        }
        printf("\n");
    }
}
