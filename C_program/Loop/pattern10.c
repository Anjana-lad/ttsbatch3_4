// pattern 10
// * * * * *
//   * * * *
//     * * *
//       * *
//         *

//#include<stdio.h>
//int main(){
//     int row,col,space;
//     for(row=5;row>=1;row--){
//         for(space=1;space<=5-row;space++){
//             printf("  ");
//         }
//         for(col=1;col<=row;col++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

// pattern 
// 1 2 3 4 5
//   1 2 3 4
//     1 2 3
//       1 2
//         1

#include<stdio.h>
int main(){
        int row,col,space;
    for(row=5;row>=1;row--){
        for(space=1;space<=5-row;space++){
            printf("  ");
        }
        for(col=1;col<=row;col++){
            printf("%d ",col);
        }
        printf("\n");
    }
}