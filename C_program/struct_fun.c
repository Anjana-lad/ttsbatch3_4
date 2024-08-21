// structure with function:
//passing structure as a parameter  to a function.

#include<stdio.h>
struct student{
    int rollno;
    float marks[4];
    int standard;
};
int st_details(struct student st){
    printf("\n Rollno:%d",st.rollno);
    printf("\n Standard:%d",st.standard);
    for(int i=0;i<4;i++){
        printf("\n Marks= %f",st.marks[i]);
    }
}
int main(){
    struct student s;
    printf("Enter rollno:");
    scanf("%d",&s.rollno);
    printf("Enter standard:");
    scanf("%d",&s.standard);
    printf("Enter marks for 4 subject:");
     for(int i=0;i<4;i++){
        scanf("%f",&s.marks[i]);
    }
    st_details(s);
}