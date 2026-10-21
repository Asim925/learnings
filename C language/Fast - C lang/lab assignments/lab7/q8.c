#include <stdio.h>

int main()
{
    int stock[3][4][5];
    int i, j, k, total;
    int max_shelf = -1, max_building = 0, shelf_num = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                printf("enter items in building %d, shelf %d, slot %d: ",
                       i + 1, j + 1, k + 1);
                scanf("%d", &stock[i][j][k]);
            }
        }
    }

    printf("\nbuilding totals:\n");

    for (i = 0; i < 3; i++)
    {
        total = 0;

        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                total += stock[i][j][k];
            }
        }

        printf("building %d: %d items\n", i + 1, total);
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            total = 0;

            for (k = 0; k < 5; k++)
            {
                total += stock[i][j][k];
            }

            if (total > max_shelf)
            {
                max_shelf = total;
                max_building = i;
                shelf_num = j;
            }
        }
    }

    printf("\nfullest shelf: building %d, shelf %d, items %d\n",
           max_building + 1, shelf_num + 1, max_shelf);

    printf("\nslots needing restock:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                if (stock[i][j][k] < 5)
                {
                    printf("[%d][%d][%d] needs restock\n",
                           i + 1, j + 1, k + 1);
                }
            }
        }
    }

    return 0;
}
