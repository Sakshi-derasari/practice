#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter numbers:");
    scanf("%d %d",&num1,&num2);
    printf("Num1=%d \n num2=%d",num1,num2);
    num1+=10;  // num1=num1+10;
    printf("\n Num1=%d",num1);
    num2*=20;
    printf("\n num2=%d",num2);
    num2-=100;
    printf("\n num2=%d",num2);
}