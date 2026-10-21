#include <stdio.h>

int main()
{
    float temp[7][4];
    float hottest, coldest, noon_sum = 0, noon_avg;
    int i, j, hot_day = 0, hot_time = 0;
    int cold_day = 0, cold_time = 0;

    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("enter temperature for day %d, time slot %d: ", i + 1, j + 1);
            scanf("%f", &temp[i][j]);
        }
    }

    hottest = coldest = temp[0][0];

    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (temp[i][j] > hottest)
            {
                hottest = temp[i][j];
                hot_day = i;
                hot_time = j;
            }

            if (temp[i][j] < coldest)
            {
                coldest = temp[i][j];
                cold_day = i;
                cold_time = j;
            }
        }

        noon_sum += temp[i][1];
    }

    noon_avg = noon_sum / 7.0;

    printf("\nhottest temperature: %.2f on day %d, time slot %d\n",
           hottest, hot_day + 1, hot_time + 1);

    printf("coldest temperature: %.2f on day %d, time slot %d\n",
           coldest, cold_day + 1, cold_time + 1);

    printf("\nweekly noon average: %.2f\n", noon_avg);
    printf("days with noon temperature above average:\n");

    for (i = 0; i < 7; i++)
    {
        if (temp[i][1] > noon_avg)
        {
            printf("day %d: %.2f\n", i + 1, temp[i][1]);
        }
    }

    return 0;
}