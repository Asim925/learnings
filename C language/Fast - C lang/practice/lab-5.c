// =========== discounts and ordering
// #include <stdio.h>
// int main()
// {
//     int age, price = 1000;
//     char day;
//     float discount = 0;

//     do
//     {
//         printf("enter your age: ");
//         scanf("%d", &age);
//     } while (age < 1);

//     do
//     {
//         printf("enter the day (H/W): ");
//         scanf(" %c", &day);
//     } while (day != 'H' && day != 'W');

//     if ((age < 12 || age > 60) && day == 'W')
//     {
//         printf("You got the age + weekend discount\n");
//         discount = 0.19;
//     }
//     else if (day == 'W')
//     {
//         printf("You got the weekend discount\n");
//         discount = 0.1;
//     }
//     else if (age < 12 || age > 60)
//     {
//         printf("You got the age discount\n");
//         discount = 0.1;
//     }

//     printf("Your total bill is: %.2f", price * (1 - discount));
//     return 0;
// }

// restuarant ordernig system
#include <stdio.h>
int main()
{
    char category;
    int item;

    printf("enter category (A / B / C) and item no. (1 / 2 / 3) : ");
    scanf(" %c %d", &category, &item);

    switch (category)
    {
    case 'A':
    case 'a':
        switch (item)
        {
        case 1:
            printf("the price of item 1 is: 3000");
            break;
        case 2:
            printf("the price of item 2 is: 2000");
            break;
        case 3:
            printf("the price of item 3 is: 1000");
            break;
        default:
            printf("enter valid item no.");
            break;
        }
        break;
    case 'B':
    case 'b':
        switch (item)
        {
        case 1:
            printf("the price of item 1 is: 3000");
            break;
        case 2:
            printf("the price of item 2 is: 2000");
            break;
        case 3:
            printf("the price of item 3 is: 1000");
            break;
        default:
            printf("enter valid item no.");
            break;
        }
        break;

    case 'C':
    case 'c':
        switch (item)
        {
        case 1:
            printf("the price of item 1 is: 3000");
            break;
        case 2:
            printf("the price of item 2 is: 2000");
            break;
        case 3:
            printf("the price of item 3 is: 1000");
            break;
        default:
            printf("enter valid item no.");
            break;
        }
        break;

    default:
        printf("enter valid  category");
        break;
    }
}