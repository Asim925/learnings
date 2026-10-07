#include <stdio.h>
#include <ctype.h>
int main()
{
    int vow = 0, cons = 0;
    char user[20];
    printf("enter the username: ");
    scanf("%19[^\n]", user);

    for (int i = 0; i < 20; i++)
    {
        if (user[i] == '\0')
        {
            break;
        }
        else if (user[i] == 'a' || user[i] == 'e' || user[i] == 'i' || user[i] == 'o' || user[i] == 'u' ||
                 user[i] == 'A' || user[i] == 'E' || user[i] == 'I' || user[i] == 'O' || user[i] == 'U')
        {
            vow++;
        }
        else if ((user[i] >= 'a' && user[i] <= 'z') || (user[i] >= 'A' && user[i] <= 'Z'))
        {
            cons++;
        }
        user[i] = toupper(user[i]);
    }

    printf("user: %s\n", user);
    printf("vowels: %d\n", vow);
    printf("consonants: %d\n", cons);

    return 0;
}