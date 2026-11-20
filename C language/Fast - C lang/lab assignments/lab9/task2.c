#include <stdio.h>
#include <string.h>
int main()
{
    char code[50];
    printf("enter product code: ");
    scanf("%49s", code);

    if (strlen(code) != 8)
    {
        printf("invalid code: length must be 8.\n");
        return 0;
    }

    if (strchr(code, '-') == NULL || code[3] != '-')
    {
        printf("invalid code: the 4th character must be '-'.\n");
        return 0;
    }

    int validCategory = 0;
    if (strncmp(code, "ELE", 3) == 0)
    {
        validCategory = 1;
    }
    else if (strncmp(code, "GRO", 3) == 0)
    {
        validCategory = 2;
    }
    else if (strncmp(code, "CLO", 3) == 0)
    {
        validCategory = 3;
    }

    if (validCategory == 0)
    {
        printf("invalid code: unknown category.\n");
        return 0;
    }

    for (int i = 4; i < 8; i++)
    {
        char ch = code[i];
        if (!(ch >= '0' && ch <= '9'))
        {
            printf("invalid code: last 4 characters must be digits.\n");
            return 0;
        }
    }

    if (validCategory == 1)
    {
        printf("valid code. category: electronics\n");
    }
    else if (validCategory == 2)
    {
        printf("valid code. category: grocery\n");
    }
    else if (validCategory == 3)
    {
        printf("valid code. category: clothing\n");
    }

    return 0;
}