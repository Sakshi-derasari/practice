#include<stdio.h>
int main() {
    int row,col,space;
    int n=5;
    for(row=1;row<=n;row++){
        for (space=1;space<=row;space++){
            printf(" ");
        }
        for(col=row;col<=2*n-row;col++){
            printf(" *");
        }
        printf("\n");    
    }
}