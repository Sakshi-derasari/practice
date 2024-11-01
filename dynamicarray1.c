#include<stdio.h>
int main(){
    int row,col;
    printf("enter row:");
    scanf("%d",&row);
    printf("enter column:");
    scanf("%d",&col);
    int arr1[20][20];
    int r,c;
    for (r=0;r<row;r++){
        for(col=0;c<col;c++){
            scanf("%d",&arr1[row][col]);
        }
    }
    printf("printing array:");
    for(r=0;r<row;r++){
        printf("\n");
        for(c=0;c<col;c++){
            printf("%d ",arr1[r][c]);
        }
    }
}