// nested switch case
#include <stdio.h>
int main()
{
    int choice, ch;
    printf("\n Select from menu:");
    printf("\n 1. Pizza");
    printf("\n 2. Cold-drink");
    printf("\n Enter choice:");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("\n You have selected Pizza");
        printf("\n Which Pizza you want:");
        printf("\n 1.Veg pizza");
        printf("\n 2. Cheese Pizza");
        printf("\n Enter choice for pizza:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("You have selected veg pizza.");
            break;
        case 2:
            printf("You have selected Cheese pizza.");
            break;
        default:
            printf("Not valid choice.");
            break;
        }
        break;
    case 2:
        printf("You have selected cold-drink.");
        printf("\n Which col-drink you want:");
        printf("\n 1.Fresh juice");
        printf("\n 2. Coke");
        printf("\n Enter choice for cold-drink:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("You have selected Fresh juice.");
            break;
        case 2:
            printf("You have selected Coke");
            break;
        default:
            printf("Not valid choice.");
            break;
        }
        break;
    default:
    printf("Invalid choice...");
        break;
    }
}