#include <stdio.h>

int main()
{
    char grade;

    printf("Enter grade: ");
    scanf(" %c", &grade);

    switch (grade)
    {
    case 'A':
        printf("excellent");
        break;

    case 'B':
        printf("very good");
        break;

    case 'C':
        printf("average");
        break;

    case 'D':
        printf("Work hard");
        break;

    case 'F':
        printf("fail");
        break;

    default:
        printf("invalid grade");
    }

    return 0;
}