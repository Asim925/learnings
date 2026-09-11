#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;
    printf("swamped number is = %d\n", a);
    printf("second swapped number is = %d", b);
    return 0;
}