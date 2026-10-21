#include <stdio.h>

int main()
{
    int marks[6][4];
    int i, j, total, sum[4] = {0};
    float average, class_avg[4];
    int best = 0;

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("enter marks of student %d in subject %d: ", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    printf("\nstudent results:\n");

    for (i = 0; i < 6; i++)
    {
        total = 0;

        for (j = 0; j < 4; j++)
        {
            total += marks[i][j];
            sum[j] += marks[i][j];
        }

        average = total / 4.0;

        printf("student %d: total = %d, average = %.2f\n",
               i + 1, total, average);
    }

    printf("\nsubject class averages:\n");

    for (j = 0; j < 4; j++)
    {
        class_avg[j] = sum[j] / 6.0;

        printf("subject %d: average = %.2f\n",
               j + 1, class_avg[j]);

        if (class_avg[j] > class_avg[best])
        {
            best = j;
        }
    }

    printf("\nbest performing subject: subject %d\n", best + 1);

    return 0;
}