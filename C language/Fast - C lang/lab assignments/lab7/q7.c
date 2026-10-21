#include <stdio.h>

int main()
{
    int marks[3][4][5];
    int i, j, k, total, topper;
    float average, dept_total, dept_avg;
    float highest_dept_avg = -1;
    int best_dept = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                printf("enter marks for department %d, student %d, subject %d: ",
                       i + 1, j + 1, k + 1);
                scanf("%d", &marks[i][j][k]);
            }
        }
    }

    for (i = 0; i < 3; i++)
    {
        dept_total = 0;
        float topper_avg = -1;
        topper = 0;

        printf("\ndepartment %d:\n", i + 1);

        for (j = 0; j < 4; j++)
        {
            total = 0;
            int fail = 0;

            for (k = 0; k < 5; k++)
            {
                total += marks[i][j][k];

                if (marks[i][j][k] < 40)
                {
                    fail = 1;
                }
            }

            average = total / 5.0;
            dept_total += total;

            printf("student %d average: %.2f", j + 1, average);

            if (fail)
            {
                printf(" - fail");
            }

            printf("\n");

            if (average > topper_avg)
            {
                topper_avg = average;
                topper = j;
            }
        }

        dept_avg = dept_total / 20.0;

        printf("department topper: student %d, average %.2f\n",
               topper + 1, topper_avg);

        printf("department average: %.2f\n", dept_avg);

        if (dept_avg > highest_dept_avg)
        {
            highest_dept_avg = dept_avg;
            best_dept = i;
        }
    }

    printf("\ndepartment with highest overall average: department %d\n",
           best_dept + 1);
    printf("highest department average: %.2f\n", highest_dept_avg);

    return 0;
}