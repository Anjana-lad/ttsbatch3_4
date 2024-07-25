//with arguments with return ;
#include<stdio.h>
int cube(int side){
    return side*side*side;
}
int main(){
    int side;
    printf("Enter side:");
    scanf("%d",&side);
    printf("Cube of given number==%d",cube(side));
}