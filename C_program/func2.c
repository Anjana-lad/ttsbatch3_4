//function 2 swap function
#include<stdio.h>
int swap(int a,int b){   //a, b  formal parameters.
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("\n A=%d \n B=%d",a,b);
}
int main(){
    int num1,num2;
    printf("\n Enter numbers:");
    scanf("%d %d",&num1,&num2);
    printf("\n num1=%d \n num2=%d",num1,num2);
    swap(num1,num2);  // num1,num2are actual parameters
    swap (50,90);
    swap(7,8);
}

/* function parameter : 2 types of parameter;
 1.formal parameter. :
   at the time of function declaration which we pass as in parameter list are called formal parameters.
 2. actual parameter. :
  the parameter which are passed at the time of function call.
*/