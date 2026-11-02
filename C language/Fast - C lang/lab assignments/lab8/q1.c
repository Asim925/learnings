#include <stdio.h>

float calculateBill(int units)
{
    float bill = 0;

    if (units <= 100)
    {
        bill = units * 10;
    }
    else if (units <= 200)
    {
        bill = (100 * 10) + ((units - 100) * 15);
    }
    else
    {
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }

    return bill + 150;
}

void printBill(int units, float bill)
{
    printf("units consumed: %d\n", units);
    printf("total bill: rs. %.2f\n", bill);
}

int main()
{
    int units;
    int i;
    float bill;

    for (i = 1; i <= 3; i++)
    {
        printf("customer %d\n", i);
        printf("enter units: ");
        scanf("%d", &units);

        if (units < 0)
        {
            printf("invalid units.\n");
        }
        else
        {
            bill = calculateBill(units);
            printBill(units, bill);
        }
    }

    return 0;
}