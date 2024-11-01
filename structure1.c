#include<stdio.h>
struct student{ //structure name
    int rollno; // data member
    char name[25]; // data member
    float percent; // data member
};
int main(){
    struct student s1[2]; //structure variable
    int i;
    for (i=0;i<2;i++){
    printf("enter studrnt roll no:");
    scanf("%d",&s1[i].rollno);
    printf("enter name:");
    scanf("%s",&s1[i].name);
    printf("enter percent:");
    scanf("%f",&s1[i].percent);
    }
    for (i=0;i<2;i++){
    printf("\n student details:");
    printf("\n rollno=%d",s1[i].rollno);
    printf("\n name=%s",s1[i].name);
    printf("\n percent=%.2f",s1[i].percent);
    }
    }
