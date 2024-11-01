#include<stdio.h>
int main() {
    int row,col,space;
    for(row=5;row>=1;row--){
        for(col=row;col>=1;col--){
            if(row==5||col==5||col==row||col==1){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
    printf("\n");    
    }
}