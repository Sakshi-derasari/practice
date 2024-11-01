// pointer is a variable that is used to store the address of another variable. 
//pointer variable is declared using (*)astrick symbol.
/*syntex:
declaring a pointer variable:
datatype*variable name;
initialization:
ptr_variable = &variable_name //referncing a variable
*/

#include<stdio.h>
int main(){
    int num;
    printf("enter number:");
    scanf("%d",&num);
    int *ptr;
    ptr=&num; // referencing variable
    printf("%d is at address %d", num, ptr); // strores ptr address
    printf("\n value at poiner:%d",*ptr);
}