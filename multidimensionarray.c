#include<stdio.h>
int main(){
    int arr[3][3][3]={
        {{1,2,3},
        {4,5,6},
        {7,8,9}},
        {
            {11,12,13},{14,15,16},{17,18,19}
        },
        {
            {21,22,23},{24,25,26},{27,28,29}
        }
    };
    int row,col,table;
    //printing array
    for(table=0;table<3;table++){
        printf("\n");
    
    for(row=0;row<3;row++){
        printf("\n");
        for(col=0;col<3;col++){
            printf("%d ",arr[table][row][col]);
        }
        }
    }
}