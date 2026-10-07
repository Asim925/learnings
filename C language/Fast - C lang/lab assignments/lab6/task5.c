#include <stdio.h>
int main()
{

    int hr = 1, level;
    printf("enter level of liters: ");
    scanf("%d", &level);

    while (level != 1)
    {
        printf("current level is %d at hour %d\n", level, hr);
        if (level % 2 == 0)
            level /= 2;
        else
            level = 3 * level + 1;

        hr++;
    }

    printf("\nnumber of hours: %d\nlevel: %d", hr, level);
    return 0;
}