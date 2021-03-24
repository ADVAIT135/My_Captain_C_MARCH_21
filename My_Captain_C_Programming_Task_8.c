#include<stdio.h>
struct employee
{
    char name[20];
    int code;
    int salary;
    int age;
    char department_name[10];
    float phone_number;
};


int main(){
    struct employee e[20];
    int i;
    void emp_read(){
    printf("\nEnter the name of the employee : ");
    scanf("%s",&e[i].name);
    printf("\nEnter the employee number/code : ");
    scanf("%d",&e[i].code);
    printf("\nEnter the age of the employee : ");
    scanf("%d",&e[i].age);
    printf("\nEnter the employee's department name : ");
    scanf("%s",&e[i].department_name);
    printf("\nEnter the employee's phone number : ");
    scanf("%f",&e[i].phone_number);
    printf("\nEnter the salary of the employee : ");
    scanf("%d",&e[i].salary);
    }
    void emp_display(){
    printf("\n%s \t%d  \t%d    \t%s       \t%d \t%0.0f",e[i].name,e[i].age,e[i].code,e[i].department_name,e[i].salary,e[i].phone_number);
    }
    printf("\nEnter the number of employees whose data you want to store in :- ");
    int n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nEnter the details of the %d employee :-",i+1);
        emp_read();
    }
    printf("\nThe details of the employees are :-");
    printf("\n");
    printf("\nName \tAge  \tCode    \tDepartment name \tSalary \tPhone number");
    printf("\n");
    for(i=0;i<n;i++){
        emp_display();
        printf("\n");
    }
    return 0;
}
