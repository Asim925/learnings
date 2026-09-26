#include <stdio.h>
int main()
{
    char department;
    int semester;
    printf("enter department (C/E/B): ");
    scanf("%c", &department);

    switch (department)
    {
    case 'C':
    case 'c':
        printf("Enter semester (1/2/3): ");
        scanf("%d", &semester);

        switch (semester)
        {
        case 1:
            printf("programming fundamentals");
            break;
        case 2:
            printf("object oriented programming");
            break;
        case 3:
            printf("data structures");
            break;
        default:
            printf("invalid semester");
        }
        break;

    case 'E':
    case 'e':
        printf("enter semester (1/2/3): ");
        scanf("%d", &semester);

        switch (semester)
        {
        case 1:
            printf("circuit analysis");
            break;
        case 2:
            printf("digital logic design");
            break;
        case 3:
            printf("electromagnetic fields");
            break;
        default:
            printf("invalid semester");
        }
        break;

    case 'B':
    case 'b':
        printf("Enter semester (1/2/3): ");
        scanf("%d", &semester);

        switch (semester)
        {
        case 1:
            printf("principles of management");
            break;
        case 2:
            printf("financial accounting");
            break;
        case 3:
            printf("marketing management");
            break;
        default:
            printf("invalid semester");
        }
        break;

    default:
        printf("invalid department");
    }

    return 0;
}