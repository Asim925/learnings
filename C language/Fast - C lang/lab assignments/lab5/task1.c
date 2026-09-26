#include <stdio.h>
int main()
{
    int marks;
    printf("enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 90)
    {
        if (marks == 100)
            printf("A grade\nPerfect score");
    }
    else if (marks >= 75)
        printf("B grade");
    else if (marks >= 60)
        printf("C grade");
    else if (marks >= 40)
        printf("D grade");
    else
        printf("Fail");
    return 0;
}
