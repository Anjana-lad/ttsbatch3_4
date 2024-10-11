//pointer and array
#include<stdio.h>
int main(){
    int arr[5];
    int *ptr1,*ptr2,i;
    printf("Enter elements of array:");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n Print array");
    for(int i=0;i<5;i++){
        printf("%d \t",arr[i]);
    }
    ptr1=&arr[0];
    ptr2=&arr[4];

    printf("\n arr[0]=%d",ptr1);
    printf("\n arr[4]=%d",ptr2);
    // using pointer arithmetic
     ptr1++;
     printf("\n %d",ptr1);
     ptr2--;
     printf("\n %d",ptr2);
     int k= *ptr1 + *ptr2;
     printf("\n K=%d",k);
     int j =*ptr1 * 20;
     printf("\n j=%d",j);
}