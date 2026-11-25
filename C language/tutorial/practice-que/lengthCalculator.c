#include <stdio.h>

int calcLength(char *p)
{
    int l = 0;
    for (int i = 0; *(p + i) == '\0'; i++)
        l++;

    return l;
}
int main()
{
    char s[10];
    scanf(" %9[^\n]", s);
    int length = calcLength(s);
    printf("the length of string is: %d", length);
}