//calculator using function
#include<stdio.h>
int show(int a,char ch,int b,int res){
    printf("%d %c %d= %d",a,ch,b,res);
}
int add(int a,int b){
    int res= a+b;
    show(a,'+',b,res);
}
int sub(int a,int b){
       int res= a-b;
    show(a,'-',b,res);
}
int multiply(int a,int b){
       int res= a*b;
    show(a,'*',b,res);
}
int division(int a,int b){
       int res= a/b;
    show(a,'/',b,res);
}
int main(){
    int num1,num2,choice;
 do{
    printf("\n Enter your choice ?");
    printf("\n 1.Addition");
    printf("\n 2.Subtraction");
    printf("\n 3. Multiplication");
    printf("\n 4. Division");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("Enter numbers:");
        scanf("%d %d",&num1,&num2);
        add(num1,num2);
        break;
      case 2:
        printf("Enter numbers:");
        scanf("%d %d",&num1,&num2);
        sub(num1,num2);
        break;
          case 3:
        printf("Enter numbers:");
        scanf("%d %d",&num1,&num2);
        multiply(num1,num2);
        break;
          case 4:
        printf("Enter numbers:");
        scanf("%d %d",&num1,&num2);
        division(num1,num2);
        break;
    default:
     printf("Invalid choice...");
        break;
    }
 }while(choice<=4);
}