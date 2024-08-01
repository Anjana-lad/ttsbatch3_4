//accessing array element
#include<stdio.h>
int main(){
    int size;
     printf("Enter array size:");
    scanf("%d",&size);
    int arr[size],num; 
    printf("Enter array elements:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter number to be searched:");
    scanf("%d",&num);
    for(int i=0;i<size;i++){
        if(num==arr[i]){
            printf("arr[%d]=%d",i,arr[i]);
        }
    }
}