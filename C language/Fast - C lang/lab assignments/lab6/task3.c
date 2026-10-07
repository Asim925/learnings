#include <stdio.h>
int main()
{
    int n;
    printf("enter the no of years: ");
    scanf("%d", &n);
    float change = 1, rate = 1.08;
    for (int i = 0; i < n; i++)
    {
        change *= rate;
    }
    printf("the change is : %.2f for %d years", change, n);
    return 0;
}