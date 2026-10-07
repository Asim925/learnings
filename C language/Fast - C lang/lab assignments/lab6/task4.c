#include <stdio.h>
int main()
{
    int pin, sum = 0;
    printf("enter your pin: ");
    scanf("%d", &pin);
    if (pin < 1000 || pin > 999999)
        printf("invalid pin");

    while (pin != 0)
    {
        printf("%d ", pin % 10);
        sum += pin % 10;
        pin /= 10;
    }

    printf("sum  =  %d", sum);
    return 0;
}