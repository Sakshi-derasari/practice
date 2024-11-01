#include<stdio.h>
int main()
{
    int age;
    printf("Enter age:");
    scanf("%d",&age);
    if(age>18){
        printf("Able to drive a vehicle");
    }
    else{
        printf("Not able to drive a vehicle");
    }
}