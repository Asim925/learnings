#include <stdio.h>

int main()
{
    int rooms[4][6];
    int i, j, vacant, max_vacant = -1, best_floor = 0;
    int count, found = 0;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf("enter status of floor %d, room %d (1 occupied, 0 vacant): ",
                   i + 1, j + 1);
            scanf("%d", &rooms[i][j]);
        }
    }

    for (i = 0; i < 4; i++)
    {
        vacant = 0;

        for (j = 0; j < 6; j++)
        {
            if (rooms[i][j] == 0)
            {
                vacant++;
            }
        }

        printf("floor %d vacancies: %d\n", i + 1, vacant);

        if (vacant > max_vacant)
        {
            max_vacant = vacant;
            best_floor = i;
        }
    }

    printf("\nfloor with most vacancies: floor %d\n", best_floor + 1);
    printf("\nfloors with 3 or more consecutive vacant rooms:\n");

    for (i = 0; i < 4; i++)
    {
        count = 0;

        for (j = 0; j < 6; j++)
        {
            if (rooms[i][j] == 0)
            {
                count++;

                if (count == 3)
                {
                    printf("floor %d, starting room %d\n", i + 1, j - 1);
                    found = 1;
                    break;
                }
            }
            else
            {
                count = 0;
            }
        }
    }

    if (!found)
    {
        printf("no floor has 3 or more consecutive vacant rooms\n");
    }

    return 0;
}