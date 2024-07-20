// pattern 6
//      1
//     12
//    123
//   1234
//  12345

// #include<stdio.h>
// int main(){
//     int row,space,col;
//     for(row=1;row<=5;row++){
//         for(space=5;space>=row;space--){
//             printf(" ");
//         }
//         for(col=1;col<=row;col++){
//             printf("%d",col);
//         }
//         printf("\n");
//     }
// }

#include<stdio.h>
int main(){
    int row,col;
    for(row=1;row<=5;row++){
        for(col=1;col<=5;col++){
            if(row==5||row==1||col==5||col==1){
            printf("*");
            }
            else{
                printf(" ");
            }
        }

        printf("\n");
    }
}