// recursion means function calling itself. 
// #include<stdio.h>
// int recur(int num);
// int main(){
//     int num;
//     printf("Enter number:");
//     scanf("%d",&num);
//     int res= recur(num);
//     printf("Sum of given number=%d",res);

// }

// int recur(int num){
//     if(num!=0){
//         return num=num+recur(num-1);  //recursion
//     }
//     else{
//         return 0;
//     }
// }

// factorial using recursion

#include<stdio.h>
int recur(int num);
int main(){
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    int res= recur(num);
    printf("factorial of given number=%d",res);

}

int recur(int num){
    if(num<1){
            return 1;
      }
    else{
          return num=num*recur(num-1);  //recursion
    }
}