// using of constant keyword or #define
//area of circle= Pi*radius*radius;

#include<stdio.h>
#define pi 3.14
int main(){
 int radius;
//const float pi= 3.14;  
float area;
printf("Enter radius:");
scanf("%d",&radius);
area=pi*radius*radius;
printf("Area of circle=%f",area);
}