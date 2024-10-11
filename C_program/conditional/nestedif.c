// nested if : if inside if 
/* syntax:
    if(condition){
    if(condition){
    //statements}
    else{
    //statements
    }
}
    else{
    if(condition){
    //st}
    else{
    //st
     }
    }
*/

// check weather the male or female is eligible for marriage or not.
#include<stdio.h>
int main(){
    char choice;
    int age;
    printf("Select your choice:");
    printf("\n M :- Male");
    printf("\n F :- Female");
    printf("Enter choice:");
    scanf("%c",&choice);
    if(choice=='M' || choice=='m'){
        printf("Enter age:");
        scanf("%d",&age);
        if(age>21){
            printf("Eligible for marriage.");
        }
        else{
            printf("Not eligible for marriage.");
        }
    }
    else if(choice=='F'|| choice== 'f'){
        printf("Enter age for female:");
        scanf("%d",&age);
        if(age>18){
            printf("Female is eligible for marriage");
        }
        else{
            printf("She is not eligible for marriage.");
        }
    }
    else{
        printf("Invalid choice..");
    }
}