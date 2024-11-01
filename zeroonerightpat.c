#include<stdio.h>
int main(){
    int row,col;
    for(row=1;row<=4;row++){
        for(col=0;col<=row;col++){
            if(col!=2==1){
                printf("%d",col);
            }
            else{
                printf("0");
            }
        }
    printf("\n");
    }
}