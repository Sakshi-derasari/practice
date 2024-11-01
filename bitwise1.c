#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter numbers:");
    scanf("%d %d",&num1,&num2);
    printf("\n Bitwise and:%d",num1&num2);
    printf("\n Bitwise Or :%d",num1|num2);
    printf("\n exclusive XOr :%d",num1^num2);
    printf("\n Negation of num1=%d",~num1);
    printf("\n shift right of num1=%d",num1>>1);
    printf("\n shift left of num2=%d",num2<<1);
}