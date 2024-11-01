#include<stdio.h>
int main() {
    int row,col,space;
    int n=5;
    for(row=0;row<n;row++) {
        for (space=n;space>=row;space--){
            printf(" ");
        }
        for(col=0;col<=row;col++){
            printf(" *");
        }
        printf("\n");    
    }

    for(row=0;row<n;row++) {
        for (space=n;space>=row;space--){
            printf(" ");
        }
        for(col=0;col<=row;col++){
            printf(" *");
        }
        printf("\n");    
    }

   for(row=0;row<n;row++){
        for(col=0;col<n;col++){
            if(col==2 || col==4){
            printf(" *");
            }
            else{
            printf("  ");
            }
        }   
    printf("\n");
    }
}
