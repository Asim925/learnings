#include <stdio.h>
int main()
{
    int marks;
    do
    {
        printf("Enter your marks: ");
        scanf("%d", &marks);
    } while (marks < 0 || marks > 100);

    if (marks >= 50)
        printf("pass");
    else
        printf("fail");
    return 0;
}