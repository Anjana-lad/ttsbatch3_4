//pattern 9
//*****
//****
//***
//**
//*

// #include<stdio.h>
// int main(){
//     int row,col;
//     for(row=1;row<=5;row++){
//         for(col=5;col>=row;col--){
//             printf("*");
//         }
//         printf("\n");
//     }
// }

//pattern 10
// 11111
// 2222
// 333
// 44
// 5

// #include<stdio.h>
// int main(){
//     int row,col;
//     for(row=1;row<=5;row++){
//         for(col=5;col>=row;col--){
//             printf("%d",row);
//         }
//         printf("\n");
//     }
// }

// 12345
// 1234
// 123
// 12
// 1

#include<stdio.h>
int main(){
    int row,col;
    char ch='A';
    for(row=5;row>=0;row--){
        for(col=0;col<=row;col++){
            printf("%c",ch+col);
        }
        printf("\n");
    }
}