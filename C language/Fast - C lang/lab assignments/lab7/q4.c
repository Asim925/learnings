#include <stdio.h>

int main()
{
    int sales[3][5];
    int i, j, total, branch_total[3] = {0};
    int product_total[5] = {0};
    int best_branch = 0, lowest_product = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("enter sales of branch %d, product %d: ", i + 1, j + 1);
            scanf("%d", &sales[i][j]);
        }
    }

    printf("\nbranch totals:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            branch_total[i] += sales[i][j];
            product_total[j] += sales[i][j];
        }

        printf("branch %d: %d\n", i + 1, branch_total[i]);

        if (branch_total[i] > branch_total[best_branch])
        {
            best_branch = i;
        }
    }

    printf("\nproduct totals:\n");

    for (j = 0; j < 5; j++)
    {
        printf("product %d: %d\n", j + 1, product_total[j]);

        if (product_total[j] < product_total[lowest_product])
        {
            lowest_product = j;
        }
    }

    printf("\nbest-selling branch: branch %d\n", best_branch + 1);
    printf("product with lowest sales: product %d\n", lowest_product + 1);

    return 0;
}