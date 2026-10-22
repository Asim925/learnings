#include <stdio.h>
int main()
{
    int rows, seats, k;
    printf("enter the number of rows: ");
    scanf("%d", &rows);
    printf("enter the number of seats in each row: ");
    scanf("%d", &seats);
    printf("enter the number of consecutive seats you need: ");
    scanf("%d", &k);

    if (k > seats)
        printf("limit exceeded of seats !");
    else
    {
        int cinema[rows][seats];
        int freeSeats[rows];
        int totalFree = 0;
        printf("\n=== asking for the seats (enter 0: empty or 1: taken) ===\n\n");
        for (int i = 0; i < rows; i++)
        {
            int free = 0;
            printf("enter the space seperated seats for row %d: ", i + 1);
            for (int j = 0; j < seats; j++)
            {
                scanf("%d", &cinema[i][j]);
                if (!cinema[i][j])
                    free++;
            }
            freeSeats[i] = free;
            totalFree += free;
            printf("\n");
        }

        printf("\nFree seats per row: ");
        for (int i = 0; i < rows; i++)
        {
            printf("%d ", freeSeats[i]);
        }
        printf("\tTotal Free Seats: %d\n", totalFree);

        int mid = rows / 2;
        int found = 0, selectedRow, selectedSeat;

        for (int changer = 0; changer <= mid; changer++)
        {
            int consecutiveCount1 = 0, consecutiveCount2 = 0;
            for (int seat = 0; seat < seats; seat++)
            {
                if (!cinema[mid - changer][seat])
                {
                    consecutiveCount1++;
                    if (consecutiveCount1 == k)
                    {
                        found = 1;
                        selectedRow = mid - changer;
                        selectedSeat = seat - consecutiveCount1 + 1;
                        while (consecutiveCount1)
                        {
                            cinema[mid - changer][seat - consecutiveCount1 + 1] = 1;
                            consecutiveCount1--;
                        }

                        break;
                    }
                }
                else
                {
                    consecutiveCount1 = 0;
                }

                if (changer && (mid + changer < rows) && !cinema[mid + changer][seat])
                {
                    consecutiveCount2++;
                    if (consecutiveCount2 == k)
                    {
                        found = 1;
                        selectedRow = mid - changer;
                        selectedSeat = seat - consecutiveCount2 + 1;
                        while (consecutiveCount2)
                        {
                            cinema[mid + changer][seat - consecutiveCount2 + 1] = 1;
                            consecutiveCount2--;
                        }
                        break;
                    }
                }
                else
                {
                    consecutiveCount2 = 0;
                }
            }
            if (found)
                break;
        }

        if (found)
        {
            printf("\nGroup of %d seated in row %d, seats from %d to %d\n\n", k, selectedRow, selectedSeat, selectedSeat + k - 1);
            for (int i = -1; i < rows; i++)
            {

                if (i >= 0)
                    printf("\nR%d  ", i);
                else
                    printf("    ");
                for (int j = 0; j < seats; j++)
                {
                    if (i < 0)
                        printf("%d ", j);
                    else
                        cinema[i][j] ? printf("X ") : printf("_ ");
                }
            }
        }
        else
        {
            printf("\nNo available group of %d consecutive seats found.\n", k);
        }
    }
    printf("\n\n");
    return 0;
}

// 0 0 1 0 0 0 0 1

// 0 1 1 0 0 0 1 0

// 1 0 0 0 1 0 0 0

// 0 0 0 0 0 1 1 0

// 1 1 0 0 0 0 0 0
