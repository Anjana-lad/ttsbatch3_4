//pattern 7
//        A
//      B A
//    C B A
//  D C B A
//E D C B A

// #include<stdio.h>
// int main(){
//     int row,space,col;
//     char ch='A';
//     for(row=0;row<5;row++){
//         for(space=5;space>=row;space--){
//             printf(" ");
//         }
//         for(col=5;col>=row;col--){
//             printf("%c",);
//         }
//         printf("\n");
//     }
// }

//     1
//    21
//   321
//  4321
// 54321

#include<stdio.h>
int main(){
    int row,col,space;
    for(row=1;row<=5;row++){
        for(space=5;space>=row;space--){
            printf(" ");
        }
        for(col=1;col<=row;col++){
            printf("%d",row);
        }
        printf("\n");
    }
}