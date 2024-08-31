// malloc program :-
// #include<stdlib.h>
// #include<stdio.h>
// int main(){
//     int n,i,*ptr,sum=0;
//     printf("Enter total numbers of elements:");
//     scanf("%d",&n);
//     ptr=(int *) malloc(n*sizeof(int));
//     if(ptr==NULL){
//         printf("Memory not allocated.");
//     exit(0);
//     }
//     printf("Enter elements of n:");
//     for(i=0;i<n;i++){
//         scanf("%d",ptr+i);
//         sum+=*(ptr+i);
//     }
//     printf("Sum=%d",sum);
// }
// calloc program

// #include<stdlib.h>
// #include<stdio.h>
// int main(){
//     int n,i,*ptr,sum=0;
//     printf("Enter total numbers of elements:");
//     scanf("%d",&n);
//     ptr=(int *) calloc(n,sizeof(int));
//     printf("Memory=%d",ptr);
//     if(ptr==NULL){
//         printf("Memory not allocated.");
//     exit(0);
//     }
//     printf("Enter elements of n:");
//     for(i=0;i<n;i++){
//         scanf("%d",ptr+i);
//         sum+=*(ptr+i);
//     }
//     printf("Sum=%d",sum);
// }

//realloc memory
#include<stdio.h>
int main(){
    int i,n1,n2,*ptr;
    printf("Enter size to allocate:");
    scanf("%d",&n1);
    ptr=(int *) malloc(n1*sizeof(int));
    for(i=0;i<n1;i++){
        printf("%d\n",ptr+i);
    }
    printf("Enter new size:");
    scanf("%d",&n2);
    ptr=(int *)realloc(ptr,n2*sizeof(int));
    printf("enter elements:");
    for(i=0;i<n2;i++){
        printf("%d\n",ptr+i);
        }
        free(ptr);
}