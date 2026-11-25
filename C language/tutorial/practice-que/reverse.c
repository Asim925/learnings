#include <stdio.h>

void reverse(int *p)
{
    for (int i = 0; i < 5 / 2; i++)
    {
        int t = *(p + i);
        *(p + i) = *(p + 4 - i);
        *(p + 4 - i) = t;
    }
}
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    reverse(a);

    for (int i = 0; i < 5; i++)
        printf("%d ", a[i]);
}