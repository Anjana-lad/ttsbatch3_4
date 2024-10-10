//constant or #define 
//area of circle=>pi*radius*radius; 
// #include<stdio.h>
// int main(){
//     int radius;
//     const float pi =3.14;  //using const keyword
//     float area;
//     printf("Enter radius:");
//     scanf("%d",&radius);
//     area=pi*radius*radius;
//     printf("Area=%f",area);

// }
//using # define
#include<stdio.h>
#define pi 3.14
int main(){
    int radius;
    float area;
    printf("Enter radius:");
    scanf("%d",&radius);
    area=pi*radius*radius;
    printf("Area=%f",area);

}