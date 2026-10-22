#include <stdio.h>
int main()
{
    int mat[3][2][3] = {
        {{1, 2, 3},
         {1, 2, 3}},
        {{0, 9, 8},
         {0, 9, 8}},
        {{7, 6, 5},
         {6, 7, 5}}};

    for (int i = 0; i < 3; i++)
    {
        printf("==== matrix no. %d ====\n", i + 1);
        for (int j = 0; j < 2; j++)
        {
            printf("row %d: ", j + 1);
            for (int k = 0; k < 3; k++)
            {
                printf("%d ", mat[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}