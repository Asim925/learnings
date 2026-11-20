#include <stdio.h>
#include <string.h>
int main()
{
    char first[50];
    char last[50];
    printf("enter the first name: ");
    fgets(first, sizeof(first), stdin);
    first[strcspn(first, "\n")] = '\0';
    printf("enter the last name: ");
    fgets(last, sizeof(last), stdin);
    last[strcspn(last, "\n")] = '\0';

    if (strlen(first) > 20 || strlen(last) > 20)
        printf("Error: Name cannot exceed 20 characters.\n");
    else
    {
        printf("Badeg: %s, %s\n", last, first);
        char full[strlen(first) + strlen(last) + 2];
        strcpy(full, first);
        strcat(full, " ");
        strcat(full, last);
        printf("full name : %s\n", full);
        printf("length: %zu\n", strlen(full));
    }
    return 0;
}
