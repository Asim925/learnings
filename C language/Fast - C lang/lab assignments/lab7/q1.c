#include <stdio.h>
int main()
{
    int seats[5][8];
    int i, j, free, total = 0;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 8; j++)
        {
            printf("enter status of seat [%d][%d] (0 for empty, 1 for booked): ", i, j);
            scanf("%d", &seats[i][j]);
        }
    }

    printf("\nseating map:\n");

    for (i = 0; i < 5; i++)
    {
        free = 0;

        for (j = 0; j < 8; j++)
        {
            if (seats[i][j] == 0)
            {
                printf(". ");
                free++;
            }
            else
            {
                printf("x ");
            }
        }

        total += free;
        printf(" free seats: %d\n", free);
    }

    printf("\ntotal free seats: %d\n", total);

    return 0;
}