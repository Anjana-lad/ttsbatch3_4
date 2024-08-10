// sum of array elements.
#include<stdio.h>
int main(){
    int arr []={15,8,36,74,85};
    int sum=0;
    for (int i=0;i<5;i++){
        sum+=arr[i];
    }
    printf("Sum=%d",sum);
}