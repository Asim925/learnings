#include <stdio.h>
int main()
{
    int N;
    printf("enter no of rows: ");
    scanf("%d", &N);

    int arr[N][N];
    int spaces = N - 1;
    for (int i = 0; i < N; i++)
    {
        for (int j = 1; j <= spaces; j++)
        {
            printf(" ");
        }
        arr[i][0] = 1;
        arr[i][i] = 1;
        for (int k = 1; k < i; k++)
        {
            arr[i + 1][k] = arr[i][k] + arr[i][k - 1];
        }
        for (int A = 0; A < i; A++)
        {
            printf("%d ", arr[i][A]);
        }
        printf("\n");
        spaces--;
    }
    return 0;
}