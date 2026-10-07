#include <stdio.h>
int main()
{
    int choice;
    do
    {
        printf("\n1. add item\n2. remove item\n3. view total\n4. checkout\n");
        printf("enter your choice as 1/2/3/4: ");
        scanf("%d", &choice);
    } while (choice != 4);
    return 0;
}