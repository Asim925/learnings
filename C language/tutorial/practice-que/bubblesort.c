#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int *p)
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (*(p + j) > *(p + j + 1))
                swap(p + j, p + j + 1);
        }
    }
}

int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    sort(a);

    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);

    return 0;
}