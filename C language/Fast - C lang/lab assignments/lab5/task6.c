#include <stdio.h>
#include <math.h>
int main()
{
    int mode, a, b;
    char operation;
    printf("enter the mode no. (1 for arithmetic operations and 2 for power operations): ");
    scanf("%d", &mode);

    switch (mode)
    {
    case 1:
        printf("enter two space seperated values of a and b: ");
        scanf("%d %d", &a, &b);

        printf("enter the arithmetic operation: + - * / : ");
        scanf(" %c", &operation);

        switch (operation)
        {
        case '+':
            printf("a + b = %d", a + b);
            break;
        case '-':
            printf("a - b = %d", a - b);
            break;
        case '*':
            printf("a * b = %d", a * b);
            break;
        case '/':
            printf("a / b = %d", a / b);
            break;
        default:
            printf("invalid arithmetic operation");
        }
        break;
    case 2:
        printf("enter value of a: ");
        scanf("%d", &a);
        printf("enter the power operation: (r for square root, s for square): ");
        scanf(" %c", &operation);

        switch (operation)
        {
        case 's':
            printf("the square of a is: %.2f", pow(a, 2));
            break;
        case 'r':
            printf("the square root of a is: %.2f", pow(a, .5));
            break;

        default:
            printf("invalid power operation");
        }
        break;

    default:
        printf("invalid mode number");
    }
}