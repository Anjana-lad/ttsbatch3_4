//Program for caluator
#include<stdio.h>
int main(){
    char ch;
    int n1,n2;
    printf("\n + : Addition");
    printf("\n - : Subtraction.");
    printf("\n * : Multiplication.");
    printf("\n / : Division.");
    printf("\n % :  Modulo.");
    printf("Enter your choice.");
    scanf("%c",&ch);
    switch(ch){
        case '+':
            printf("Enter numbers");
            scanf("%d %d",&n1,&n2);
            printf("Addition=%d",n1+n2);
            break; 
          case '-':
            printf("Enter numbers");
            scanf("%d %d",&n1,&n2);
            printf("Subtraction=%d",n1-n2);
            break; 

      case '*':
            printf("Enter numbers");
            scanf("%d %d",&n1,&n2);
            printf("Multiplication=%d",n1*n2);
            break; 
          case '/':
            printf("Enter numbers");
            scanf("%d %d",&n1,&n2);
            printf("Division=%d",n1/n2);
            break; 
          case '%':
            printf("Enter numbers");
            scanf("%d %d",&n1,&n2);
            printf("Modulo=%d",n1%n2);
            break;    
        default:
         printf("Invalid choice..");
         break;
    }

}