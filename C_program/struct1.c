// structure is a user- defined data-type.
//
#include<stdio.h>
struct employee
{
    int emp_id; // data member
    char name[10];
    float salary;
}e1,e2;   // e1,e2 are my structure variable

int main(){
    printf("Enter details for employee.\n");
    printf("Enter name:");
    gets(e1.name);
    printf("Enter emp_id:");
    scanf("%d",&e1.emp_id);
    printf("Enter salary:");
    scanf("%f",&e1.salary);

     printf("\n Employee details:\n");
    printf("\n Employee -id=%d",e1.emp_id);
    printf("\n Employee-name=%s",e1.name);
    printf("\n Salary=%f",e1.salary);

    printf("\n Enter details for employee.\n");
    printf("Enter name:");
   scanf("%s",&e2.name);
    printf("Enter emp_id:");
    scanf("%d",&e2.emp_id);
    printf("Enter salary:");
    scanf("%f",&e2.salary);

    printf("\n Employee -id=%d",e2.emp_id);
    printf("\n Employee-name=%s",e2.name);
    printf("\n Salary=%f",e2.salary);


    printf("\n Details needed:");
    printf("emp-name for employee1:%s",e1.name);
    printf("Emp-salary for employee2:%f",e2.salary);
}