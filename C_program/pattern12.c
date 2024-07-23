//    1
//   2 2
//  3 3 3
// 4 4 4 4
//5 5 5 5 5

// #include<stdio.h>
// int main(){
//     int row,col,space;
//     char ch;
//     for(row=0;row<=5;row++){
//         for(space=4;space>=row;space--){
//             printf(" ");
//         }
//         for(col=0;col<=row;col++){
//             printf("%c ",row+65);
//         }
//         printf("\n");
//     }
// }

// * * * * *
// *       *
// *       *
// *       *
// * * * * *


// #include<stdio.h>
// int main(){
//     int row,col;
//     for(row=1;row<=5;row++){
//         for(col=1;col<=5;col++){
//             if(row==1||row==5||col==1||col==5){
//             printf("* ");
//             }
//             else{
//                 printf("  ");
//             }

//         }
//         printf("\n");
//     }
// }

//*
//* *
//*   *
//*     *
//* * * * *

// #include<stdio.h>
// int main(){
//     int row,col;
//     for(row=1;row<=5;row++){
//         for(col=1;col<=row;col++){
//             if(row==1||row==5||row==col||col==1){
//              printf("* ");
//             }
//             else{
//                 printf("  ");
//             }
         
//         }
//         printf("\n");
//     }
// }

// 1----
// -2---
// --3--
// ---4-
// ----5

// #include<stdio.h>
// int main(){
//     int row,col;
//     for(row=1;row<=5;row++){
//         for(col=1;col<=5;col++){
//             if(row == col){
//                     printf("%d",col);
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
// }
// 5 5 5 5 5
//  4 4 4 4
//   3 3 3 
//    2 2
//     1

#include<stdio.h>
int main(){
    int row,space,col;
    for(row=5;row>=0;row--){
        for(space=5-row;space>=1;space--){
            printf(" ");
        }
        for(col=0;col<=row;col++){
            printf("%d ",row);
        }
        printf("\n");
    }
}
