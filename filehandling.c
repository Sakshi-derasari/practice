// file hadling : it is a way to create a new external file in c program;
//It supports 2 type of file that is 1. binary (understand 0 and 1 form)and 2. text file(notepad file).

#include<stdio.h>
int main(){
    FILE *ptr;
    ptr=fopen("C:\\Users\\admin\\practice\\demo.txt","w+");
    char str[50];
    printf("enter a string");
    gets(str);
    if (ptr==NULL){
        printf("file not created");
    }
    else{
        printf("file is not created.");
        fprintf(ptr,str);
    }

printf("\n data inserted succesfully.");
}