#include <stdio.h>
int main()
{
    char sign, ped;
    printf("enter the signal sign; R / Y / G? : ");
    scanf(" %c", &sign);

    switch (sign)
    {
    case 'R':
        printf("enter the pedestrian sign Y / N? : ");
        scanf(" %c", &ped);
        switch (ped)
        {
        case 'Y':
            printf("Stop and wait for pedestrian");
            break;
        case 'N':
            printf("Stop");
            break;
        default:
            printf("invalid pedestrian sign");
            break;
        }

        break;
    case 'G':
        printf("enter the pedestrian sign Y / N? : ");
        scanf(" %c", &ped);
        switch (ped)
        {
        case 'Y':
            printf("Go but watch for pedestrian");
            break;
        case 'N':
            printf("Go");
            break;
        default:
            printf("invalid pedestrian sign");
            break;
        }
        break;
    case 'Y':
        printf("be ready");
        break;

    default:
        printf("invalid signal sign");
        break;
    }
}