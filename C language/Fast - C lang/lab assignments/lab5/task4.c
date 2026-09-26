#include <stdio.h>
int main()
{
    int units, bill;
    char type;
    printf("enter number of unitss: ");
    scanf("%d", &units);
    printf("enter the type C for commercial or D for domestic: ");
    scanf(" %c", &type);

    if (type == 'D' || type == 'd')
    {
        if (units >= 0 && units <= 100)
            bill = units * 70;
        else if (units > 100 && units <= 300)
            bill = units * 80;
        else if (units > 300)
            bill = units * 90;
        else
            printf("units cant be negative");
    }
    else if (type == 'C' || type == 'c')
    {
        if (units >= 0 && units <= 100)
            bill = units * 100;
        else if (units > 100 && units <= 300)
            bill = units * 110;
        else if (units > 300)
            bill = units * 120;
        else
            printf("units cant be negative");
    }
    else
        printf("invalid type");

    printf("enter the bill %d", &bill);
    return 0;
}