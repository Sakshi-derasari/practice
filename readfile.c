#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("C:\\Users\\admin\\practice\\demo.txt","r+");
    char str[50]; // 50 is character size, 1 character =1 byte so 50char=50byte.
    if(fp==NULL){
        printf("FILE not found");
    }
    else{
        printf("FILE found.");
        while(fgets(str,50,fp)!=NULL){   //fgets reads the demo file data and printf it.fgets(buffer-string,size,filepointer)
            printf("%s",str);
        }
    }