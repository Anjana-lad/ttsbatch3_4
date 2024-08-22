// union
#include<stdio.h>
union student{
    int rollno;
    char name[20];
    float marks;
};
int main(){
    union student s[2];
    int i;
    for(i=0;i<2;i++){
        printf("Enter rollno:");
        scanf("%d",&s[i].rollno);
        printf("Enter name:");
        scanf("%s",&s[i].name);
        printf("Enter marks:");
        scanf("%f",&s[i].marks);
    }    
    for(i=0;i<2;i++){
        printf("\n Student no %d",i);
         printf("\n Rollno:%d",s[i].rollno);
         printf("\n Name:%s",s[i].name);
        printf("\n Marks:%.2f",s[i].marks);
    }
}