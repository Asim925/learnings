#include <stdio.h>
int main()
{
    int price = 500;
    for (int i = 1; i <= 10; i++)
    {
        printf("The price for Show %d is %d\n", i, price);
        price += 50;
    }
    return 0;
}