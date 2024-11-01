#include<stdio.h>
int main(){
    int row,col;
    for(row=0;row<5;row++){
        for(col=0;col<5;col++){
            if(row==0 || row==4 || col==0  || col==4){
            printf("* ");
            }
            else{
            printf("  ");
            }
        }   
    printf("\n");
    }
}