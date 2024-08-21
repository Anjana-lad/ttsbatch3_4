//nested structure.
#include<stdio.h>
struct employee
{
    int emp_id; 
    char name[10];
    float salary;
    struct department{
        int dep_id;
        char dep_name[20];
    }dept; 
};   
int main(){
    struct employee e1,e2;
    printf("Enter details for employee.\n");
    printf("Enter name:");
    gets(e1.name);
    printf("Enter emp_id:");
    scanf("%d",&e1.emp_id);
    printf("Enter salary:");
    scanf("%f",&e1.salary);
    printf("Enter dept_id:");
    scanf("%d",&e1.dept.dep_id);
    printf("Enter dept_name:");
    scanf("%s",e1.dept.dep_name);

     printf("\n Employee details:\n");
    printf("\n Employee -id=%d",e1.emp_id);
    printf("\n Employee-name=%s",e1.name);
    printf("\n Salary=%f",e1.salary);
     printf("\n Dept_id:%d",e1.dept.dep_id);
     printf("\n Dept_name:%s",e1.dept.dep_name);

    printf("\n Enter details for employee.\n");
    printf("Enter name:");
   scanf("%s",&e2.name);
    printf("Enter emp_id:");
    scanf("%d",&e2.emp_id);
    printf("Enter salary:");
    scanf("%f",&e2.salary);
     printf("Enter dept_id:");
    scanf("%d",&e2.dept.dep_id);
    printf("Enter dept_name:");
    scanf("%s",e2.dept.dep_name);

    printf("\n Employee -id=%d",e2.emp_id);
    printf("\n Employee-name=%s",e2.name);
    printf("\n Salary=%f",e2.salary);
    printf("\n Dept_id:%d",e2.dept.dep_id);
     printf("\n Dept_name:%s",e2.dept.dep_name);

// accessing structure member:
    // printf("\n Details needed:");
    // printf("\n emp-name for employee1:%s",e1.name);
    // printf("\n Emp-salary for employee2:%f",e2.salary);
         
}