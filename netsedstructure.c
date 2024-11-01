//nested structure : structure inside structure

#include<stdio.h>
struct employee{ 
   int e_id;
   float salary;
   struct department{
    int d_id;
    char d_name[20];
   } dpt;
} emp;

int main(){
    printf("enter e_id:");
    scanf("%d",&emp.e_id);
    printf("enter salary:");
    scanf("%f",&emp.salary);
    printf("enter d_id:");
    scanf("%d",&emp.dpt.d_id);
    printf("enter department name:");
    scanf("%s",&emp.dpt.d_name);

    printf("\n employee details: \n");
    printf("\n emp_id=%d",emp.e_id);
    printf("\n emp_salary=%.2f",emp.salary);
    printf("\n emp_d_id=%d",emp.dpt.d_id);
    printf("\n emp_d_name=%s",emp.dpt.d_name);
}