#include <stdio.h>
int main()
{
    int i = 0;
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};

    while (i < 5)
    {
        printf("%c ", vowels[i]);
        i++;
    }
    return 0;
}
