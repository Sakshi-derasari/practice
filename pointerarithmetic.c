//pointer arithmetic with the use of array

#include<stdio.h>
int main(){
    int arr[7]={10,11,12,13,14,15,16};
    int *ptr,*ptr1;
    ptr=&arr[0];
    ptr1=&arr[6];
    printf("\n value at 0 index=%d",ptr);
    printf("\n value at last index=%d",ptr1); // it has 4 byte , start is 68 then, 68+4 for first address value then 72+4.
ptr++;
printf("\n value at :%d",ptr);
ptr--;
printf("\n value at:%d",ptr1);

int result=*ptr+*ptr1;
printf("\n value of poiner variable :%d",result);

int k=* ptr * (*ptr1);
printf("\n value at k = %d",k);
}