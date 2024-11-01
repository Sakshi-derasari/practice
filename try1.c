//printf("\n payment method");
        //printf("\n 3.cash");
        //printf("\n 4. online");
        //printf("\n select method:");
        //case 3:
            //printf("you have selected cash pay");
           // break;

        //case 4: 
            //printf("you have selected online pay , scan the QR");
            //break;

#include<stdio.h>
int main()
{
    int choice,ch;
    printf("select food of your choice");
    printf("\n 1.Burger");
    printf("\n 2.French fries");
    printf("\n enter choice :");
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
            printf("\n 4. online");
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
            printf("\n 6. online");
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

        default:
        printf("invalid choice of food");
        break;

    }
}