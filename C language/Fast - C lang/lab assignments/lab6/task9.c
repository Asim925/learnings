#include <stdio.h>
int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        printf("enter item %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("in the reverse order:\n");
    for (int i = 9; i >= 0; i--)
        printf("%d ", arr[i]);

    int find;
    printf("\nenter your required item number to find its location: ");
    scanf("%d", &find);

    for (int i = 0; i < 10; i++)
    {
        if (find == arr[i])
        {
            printf("the index of item %d is %d", find, i);
            break;
        }
        if (i == 9)
            printf("invalid item number");
    }
    return 0;
}