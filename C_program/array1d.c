//array is derived datatype which is used to store similar types of value in a single variable name.
//static array 1- dimension:
#include<stdio.h>
int main(){
    int arr_num[]={4,8,2,6,7};  
    for(int i=0;i<5;i++){
        printf("arr_num[%d]=%d \n",i,arr_num[i]);
    }
    printf("\n Printing array values square:\n ");
    for(int i=0;i<5;i++){
        printf("%d\n",arr_num[i]*arr_num[i]);
    }
}