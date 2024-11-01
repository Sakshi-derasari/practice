#include<stdio.h>
int main()
{
    int choice,ch;
    printf("\n 1.Burger");
    printf("\n 2.French fries");
    printf("\n select food of your choice");
    printf("\n enter your choice :");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("\n you have selected burger");
        printf("\n 1.veg burger");
        printf("\n 2.cheese burger");
        printf("\n enter choice for burger:");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("you have selected veg burger");
            printf("\n payment method");
            printf("\n 3.cash");
            printf("\n 4.online");
            printf("\n select method:");
            scanf("%d",&ch);
            {
            case 3:
            printf("you have selected cash pay");
            break;

            case 4: 
            printf("you have selected online pay , scan the QR");
            break;
            }
            break;
        
        case 2:
            printf("you have seleted cheese burger");
            printf("\n payment method");
            printf("\n 5.cash");
            printf("\n 6.online");
            printf("\n select method:");
            scanf("%d",&ch);
            {
            case 5:
            printf("you have selected cash pay");
            break;

            case 6: 
            printf("you have selected online pay , scan the QR");
            break;
            }
            break;

        default:
            printf("invalid choice of burger");
            break;
        }
        break;

    case 2:
        printf("\n you selected french fries");
        printf("\n french fries choice");
        printf("\n 1.salted french fires");
        printf("\n 2.peri peri french fires");
        printf("\n enter choice for french fries:");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("you have selected salted french fries");
            printf("\n payment method");
            printf("\n 7.cash");
            printf("\n 8.online");
            printf("\n select method:");
            scanf("%d",&ch);
            {
            case 7:
            printf("you have selected cash pay");
            break;

            case 8: 
            printf("you have selected online pay , scan the QR");
            break;
            }
            break;

        case 2:
            printf("you have selected peri peri french fries");
            printf("\n payment method");
            printf("\n 9.cash");
            printf("\n 10.online");
            printf("\n select method:");
            scanf("%d",&ch);
            {
            case 9:
            printf("you have selected cash pay");
            break;

            case 10: 
            printf("you have selected online pay , scan the QR");
            break;
            }
            break;

        default:
            printf("invalid choice of french fries");
            break;
        }
        break;
        
        default:
        printf("invalid choice of food");
        break;
    
    }
}