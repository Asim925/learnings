#include <stdio.h>
int main()
{
    float units = 0;
    printf("enter the no. of units: ");
    scanf("%f", &units);

    int unitprice = 70;
    if (units < 100)
        printf("your bill is: %.2f", units * unitprice);
    else
        printf("your bill is: %.2f", units * unitprice * 0.9);
    return 0;
}