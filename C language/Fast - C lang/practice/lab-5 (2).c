#include <stdio.h>
int main()
{
    int biryani = 200, bbq = 700, malaiBoti = 1000;
    int option = 0, quantity = 0;

    printf("biryani is 200Rs, enter 1 for it \n");
    printf("bbq is 700Rs, enter 2 for it \n");
    printf("malai boti is 1000Rs, enter 3 for it \n");
    printf("If you buy 10 biryani, you can have 10 percent discount \n");
    printf("If you buy 5 bbq, you can have 5 percent discount \n");

    do
    {
        printf("\nEnter valid option number ");
        scanf("%d", &option);
    } while (option <= 0 || option > 4);

    do
    {
        printf("\n How many do you want? (enter valid input): ");
        scanf("%d", &quantity);
    } while (quantity < 0);

    if (option == 1)
    {
        if (quantity > 10)
            printf("Your total bill is: %.2f", (biryani * quantity) * (0.9));
    }
    else if (option == 2)
    {
        if (quantity > 5)
            printf("Your total bill is: %.2f", (bbq * quantity) * (0.95));
    }
    else
        printf("Your total bill is: %d", (malaiBoti * quantity));
}