#include <stdio.h>
int main()
{
    int category;
    int item;

    printf("1. Bevareges\n2. Main course\n3. Dessert\n");
    printf("\nenter category number from above: ");
    scanf("%d", &category);

    switch (category)
    {
    case 1:
        printf("\n1. soda\n2. milk shake\n3. water\n");
        printf("\nenter item number from above: ");
        scanf("%d", &item);
        switch (item)
        {
        case 1:
            printf("the price of soda is: 100");
            break;
        case 2:
            printf("the price of milkshake is: 200");
            break;
        case 3:
            printf("the price of water is: 50");
            break;
        default:
            printf("invalid item no.");
            break;
        }
        break;

    case 2:
        printf("\n1. biryani\n2. karahi\n3. BBQ\n");
        printf("\nenter item number from above: ");
        scanf("%d", &category);
        switch (item)
        {
        case 1:
            printf("the price of biryani is: 300");
            break;
        case 2:
            printf("the price of karahi is: 800");
            break;
        case 3:
            printf("the price of BBQ is: 1000");
            break;
        default:
            printf("enter valid item no.");
            break;
        }
        break;

    case 3:
        printf("\n1. icecream\n2. gulab jamun\n3. custard\n");
        printf("\nenter item number from above: ");
        scanf("%d", &category);
        switch (item)
        {
        case 1:
            printf("the price of icecream is: 300");
            break;
        case 2:
            printf("the price of gulab jamun is: 50");
            break;
        case 3:
            printf("the price of custard is: 150");
            break;
        default:
            printf("enter valid item no.");
            break;
        }
        break;

    default:
        printf("invalid category");
        break;
    }
}