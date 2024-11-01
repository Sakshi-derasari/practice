#include<stdio.h>
int main(){
    int row,col,space;
    for(row=5;row>=1;row++){
        for(col=row;col<=5;col++){
            if(col!=2){
                printf("%d",col);
            }
            else{
                printf("*");
            }
        }
    printf("\n");
    }
}