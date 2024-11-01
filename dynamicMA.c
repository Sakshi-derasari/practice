// dynamic memory allocation
/* methods
1. malloc()
2. calloc()
3. realloc()
4. free() */

//malloc=(int *)malloc(num*sizeof(int));
//program to find sum of n natural numbers.

//calloc = (num)

#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr,sum=0,i;
    int num;
    printf("enetr total numbers of elements:");
    scanf("%d",&num);
    ptr=(int *) malloc(num*sizeof(int));

    if(ptr==NULL){
        printf("no memory allocation.");
    }
    else{
        printf("memory aloocated is ");
        printf("\n enter elements:");
        for(i=0;i<=num;i++){
        scanf("%d",(ptr+i));
        sum+=*ptr+i;
        }
    }
    printf("sum=%d",sum);
    free(ptr); //free the allocated memory
}