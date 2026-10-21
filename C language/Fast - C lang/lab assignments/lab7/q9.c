#include <stdio.h>

int main()
{
    char titles[5][50];
    int copies[5];
    int i, j, vowels, max = 0;
    char letter;

    for (i = 0; i < 5; i++)
    {
        printf("enter title of book %d: ", i + 1);
        scanf(" %[^\n]", titles[i]);

        printf("enter number of copies: ");
        scanf("%d", &copies[i]);
    }

    printf("\n%-30s %-10s %-10s\n", "title", "copies", "vowels");

    for (i = 0; i < 5; i++)
    {
        vowels = 0;

        for (j = 0; titles[i][j] != '\0'; j++)
        {
            char ch = titles[i][j];

            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u' || ch == 'A' ||
                ch == 'E' || ch == 'I' || ch == 'O' ||
                ch == 'U')
            {
                vowels++;
            }
        }

        printf("%-30s %-10d %-10d\n", titles[i], copies[i], vowels);
    }

    printf("\nenter a letter to search titles: ");
    scanf(" %c", &letter);

    printf("\ntitles starting with '%c':\n", letter);

    for (i = 0; i < 5; i++)
    {
        if (titles[i][0] == letter)
        {
            printf("%s\n", titles[i]);
        }
    }

    for (i = 1; i < 5; i++)
    {
        if (copies[i] > copies[max])
        {
            max = i;
        }
    }

    printf("\ntitle with the most copies: %s\n", titles[max]);
    printf("number of copies: %d\n", copies[max]);

    return 0;
}