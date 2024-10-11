//if..elseif..else
/* syntax:
    if(condition){
     //statements;
    }
    elseif(condition){
    //statments
    }
    else if(contition){
    //statements.
    }
    else{
      //statements
    }
*/

//find greater number from 3 numbers.
#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter number:");
    scanf("%d %d %d",&num1,&num2,&num3);
    if ((num1>num2) && (num1>num3)){
        printf("Num1 is greater.");
    }
    else if( (num2>num1)&&(num2>num3)){
        printf("Num2 is greater.");
    }
    else{
        printf("Number 3 is greater.");
    }
}



