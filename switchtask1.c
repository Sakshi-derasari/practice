#include<stdio.h>
int main()
{
    char ch;
    printf("enter character :");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'v':
    case 'V':
        printf("This is rainbow color, violet");
        break;
    case 'i':
    case 'I':
        printf("this is rainbow color, indigo");
        break;
    case 'b':
    case 'B':
        printf("this is rainbow color, blue");
        break;
    case 'g':
    case 'G':
        printf("this is rainbow color,green");
        break;
    case 'y':
    case 'Y':
        printf("this is rainbow color, yellow");
        break;
    case 'o':
    case 'O':
        printf("this is rainbow color, orange");
        break;
    case 'r':
    case 'R':
        printf("this is rainbow color, red");
        break;
    default:
        printf("this is not a raibow color");
        break;
    }
}