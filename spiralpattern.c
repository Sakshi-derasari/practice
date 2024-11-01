#include<stdio.h>
int main(){
    int size;
    printf("enter size:");
    scanf("%d",&size);
    int arr[size][size];
    int row=0,col,num=1,end=size-1;
    for(row=0;row<=size/2;row++,end--){
    
    //loop fo left to roght
    for(col=row;col<size;col++){
        arr[row][col]=num++;
    }
    //loop fpr to to bottom
    for(col=row+1;col<=end;col++){
        arr[col][end]=num++;
    }
    //loop for right to left
    for(col=end-1;col>=row;col--){
        arr[end][col]=num++;
    }
    //loop for bottom to top
    for(col=end-1;col>row;col--){
        arr[col][row]=num++;
    }
    }
    //print array
    for(row=0;row<size;row++){
        printf("\n");
        for(col=0;col<size;col++){
            printf("%d \t",arr[row][col]);
        }
    }

}