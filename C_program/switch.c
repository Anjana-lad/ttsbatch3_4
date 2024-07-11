//switch case statements : it is used to reduce the multiple if condition in the program.
// wap to check where it is in weekdays or not. 
#include<stdio.h>
int main(){
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    switch(num){
        case 0:
            printf("Monday");
            break;
          case 1:
            printf("Tuesday");
           break;
          case 3:
            printf("wednesday");
            break;
          case 4:
            printf("Thursday");
            break;
          case 5:
            printf("friday");
            break;
          case 6:
            printf("Saturday");
            break;
          case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid day.");
            break;
    }
}