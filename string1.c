#include<stdio.h>
#include<string.h>
int main(){
    char str[20],str2[20];
    printf("string=%s",str);
    char str1[50];
    printf("\n enter string:");
    //gets(str1);
    fgets(str,20,stdin);
    fgets(str1,50,stdin);
    printf("\n string1=%s",str);
    printf("\n String2=%s",str1);
    //string lenghth
    printf("\n lenghth of str2=%d",strlen(str1));
    //string compare
    printf("\n string compare=%d",strcmp(str,str1));
    //string copy
    printf("\n string copy=%s",strcpy(str2,str1));
    printf("\n string 3=%s",str2);
    //string reverse
    printf("\n string reverse=%s\n string reverse2=%s",strrev(str1),strrev(str2));
    //string concatenate
    printf("\n concatenate=%s",strcat(str,str1));
    //string lower
    printf("\n string to change in lower:=%s",strlwr(str));
    //string upper
    printf("\n string to change in upper case=%s",strupr(str1));
    //string chararcter
    printf("\n string character = %s",strchr(str,'a'));
    //strstr (sub string)
    printf("\n string inside string=%s",strstr(str1,"gram"));
    //string set
    printf("\n string set=%s",strset(str,'x'));
}