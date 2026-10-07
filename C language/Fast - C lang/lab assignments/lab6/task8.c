#include <stdio.h>
int main()
{
    int temp[8], max = 0, min = 999999, sec_max = 0;
    for (int i = 0; i < 8; i++)
    {
        printf("Enter temperature: ");
        scanf("%d", &temp[i]);

        if (temp[i] > max)
        {
            sec_max = max;
            max = temp[i];
        }
        if (temp[i] < min)
            min = temp[i];

        printf("%d %d %d\n", max, sec_max, min);
    }
}