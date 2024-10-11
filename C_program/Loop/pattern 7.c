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
//         for(space=0;space<=5-row;space++){
//             printf(" ");
//         }
//         for(col=row;col>=0;col--){
//             printf("%c",ch+col);
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
        for(space=1;space<=5-row;space++){
            printf(" ");
        }
        for(col=row;col>=1;col--){
            printf("%d",col);
        }
        printf("\n");
    }
}

