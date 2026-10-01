#include <stdio.h>
int main()
{
    char signal;
    printf("enter signal (R, Y, G): ");
    scanf(" %c", &signal);

    switch (signal)
    {
    case 'R':
        printf("Stop ");
        break;

    case 'Y':
        printf("Wait ");
        break;

    case 'G':
        printf("Go ");
        break;

    default:
        printf("Invalid signal");
    }
    return 0;
}