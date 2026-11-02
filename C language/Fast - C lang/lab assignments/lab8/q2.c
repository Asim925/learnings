#include <stdio.h>

int isPrime(int n)
{
    int i;

    if (n < 2)
    {
        return 0;
    }

    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

void printPrimes(int start, int end)
{
    int i;

    printf("prime numbers: ");
    for (i = start; i <= end; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int countPrimes(int start, int end)
{
    int i;
    int count = 0;

    for (i = start; i <= end; i++)
    {
        if (isPrime(i))
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int start;
    int end;

    printf("enter range: ");
    scanf("%d %d", &start, &end);

    if (start >= end)
    {
        printf("invalid range. start must be less than end.\n");
    }
    else
    {
        printPrimes(start, end);
        printf("total prime numbers found: %d\n", countPrimes(start, end));
    }

    return 0;
}