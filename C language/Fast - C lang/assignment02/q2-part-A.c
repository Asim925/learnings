#include <stdio.h>
int sumOfDivisors(int x)
{
    int i, sum = 0;
    for (i = 1; i <= x / 2; i++)
    {
        if (x % i == 0)
            sum = sum + i;
    }
    return sum;
}

int main()
{
    int n, a, b, count = 0;

    printf("enter n: ");
    scanf("%d", &n);

    printf("amicable pairs up to %d:\n", n);

    for (a = 2; a <= n; a++)
    {
        b = sumOfDivisors(a);
        if (b > a && b <= n && sumOfDivisors(b) == a)
        {
            printf("(%d, %d)\n", a, b);
            count++;
        }
    }

    if (count == 0)
        printf("no amicable pairs found.\n");
    else
        printf("total pairs: %d\n", count);

    return 0;
}