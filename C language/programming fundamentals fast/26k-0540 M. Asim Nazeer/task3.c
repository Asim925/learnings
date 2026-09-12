#include <stdio.h>
int main()
{
    int num1, num2;
    printf("enter first number: ");
    scanf("%d", &num1);
    printf("enter second number: ");
    scanf("%d", &num2);

    if (num1 == num2)
    {
        printf("both numbers are equal");
    }
    else if (num1 > num2)
    {
        printf("first number is greater");
    }
    else
    {
        printf("second number is greater");
    }
    return 0;
}