#include<stdio.h>
#include<string.h>

int palindrome(char str[]) {
 
    char left = 0;
    char right = strlen(str)-1;

    while(left < right){
        if(strlen(left) != strlen(right)){
            return 0; 
        }
        left++;
        right--;
    }
    return 1;
}

int  main(){
    char str[100];

    printf("enter a string: ");
    scanf("%c",&str);

    if(palindrome(str)){
        printf("the string is palindrome.");
    }
    else{
        printf("the string is not palindrome.");
    }
}