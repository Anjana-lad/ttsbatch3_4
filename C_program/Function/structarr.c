// structure array
#include<stdio.h>
struct student{
    int rollno;
    char name[20];
    float marks;
};
int main(){
    struct student s[3];
    int i;
    for(i=0;i<3;i++){
        printf("Enter rollno:");
        scanf("%d",&s[i].rollno);
        printf("Enter name:");
        scanf("%s",&s[i].name);
        printf("Enter marks:");
        scanf("%f",&s[i].marks);
    }    
    for(i=0;i<3;i++){
        printf("\n Student no %d\n",i);
         printf("\n Rollno:%d",s[i].rollno);
         printf("\n Name:%s",s[i].name);
        printf("\n Marks:%.2f",s[i].marks);
    }

    // accessing structure data member
    printf("\n student 2 roll_no and marks: %d and %.2f",s[2].rollno,s[2].marks);
}