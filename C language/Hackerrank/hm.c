
// ========================= printing patterb ========================= //

#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    for (int i = 0; i <= 2 * n - 2; i++)
    {
        int subtractor = 0;
        for (int j = 0; j <= n * 2 - 2; j++)
        {
            if (i < n)
            {
                if (j < i - n)
                    printf("%d ", n - subtractor);
                else
                    printf("%d ", n + subtractor);

                if (i > j)
                    subtractor--;
                else if (j >= (2 * n - 2 - i))
                    subtractor++;
            }
            else
            {
                if (j < n - 2 - i)
                    printf("%d ", n - subtractor);
                else
                    printf("%d ", n + subtractor);

                if (2 * n - 2 - i > j)
                    subtractor--;
                else if (j >= (2 * n - 2 - ((2 * n - 2 - i) % n)))
                    subtractor++;
            }
        }
        printf("\n");
    }
    return 0;
}
