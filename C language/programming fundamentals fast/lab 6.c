// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter value of an integer: ");
//     scanf("%d", &n);
//     n % 2 == 0 ? printf("even number\n") : printf("odd number\n");
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int score;
//     printf("enter score : ");
//     scanf("%d", &score);
//     score >= 50 ? printf("pass\n") : printf("fail\n");
//     return 0;
// }

#include <stdio.h>
int main()
{
    printf("1. Computer science\n2. Electrical engineering\n3. Business Administration\n4. EXIT SYSTEM\n");
    int dep, course;
    printf("\nwhich department you want to choose? enter 1-4 as mentioned above: ");
    scanf("%d", &dep);

    switch (dep)
    {
    case 1:
        printf("\n1. PF\n2. DS\n3. DBS\n4. EXIT SYSTEM\n");
        printf("\nwhich course you want to choose? enter 1-4 as mentioned above: ");
        scanf("%d", &course);
        switch (course)
        {
        case 1:
            printf("\nYour department is: Computer Science, your course is PF\n");
            break;
        case 2:
            printf("\nYour department is: Computer Science, your course is DS\n");
            break;
        case 3:
            printf("\nYour department is: Computer Science, your course is DBS\n");
            break;

        default:
            printf("invalid course\n");
            break;
        }
        break;

    case 2:
        printf("\n1. circuit analysis\n2. digital logic\n3. electronics\n4. EXIT SYSTEM\n");
        printf("\nwhich course you want to choose? enter 1-4 as mentioned above: ");
        scanf("%d", &course);
        switch (course)
        {
        case 1:
            printf("\nYour department is: Computer Science, your course is circuit analysis\n");
            break;
        case 2:
            printf("\nYour department is: Computer Science, your course is digital logic\n");
            break;
        case 3:
            printf("\nYour department is: Computer Science, your course is electronics\n");
            break;

        case 4:
            printf("Thankyou, Khallas");
            break;
        default:
            printf("invalid course\n");
            break;
        }
        break;

    case 3:
        printf("\n1. marketing\n2. accounting\n3. management\n4. EXIT SYSTEM\n");
        printf("\nwhich course you want to choose? enter 1-4 as mentioned above: ");
        scanf("%d", &course);
        switch (course)
        {
        case 1:
            printf("\nYour department is: Computer Science, your course is marketing\n");
            break;
        case 2:
            printf("\nYour department is: Computer Science, your course is accounting\n");
            break;
        case 3:
            printf("\nYour department is: Computer Science, your course is management\n");
            break;
        case 4:
            printf("Thankyou, Khallas");
            break;
        default:
            printf("invalid course\n");
            break;
        }
        break;
    case 4:
        printf("Thankyou, Khallas");
        break;

    default:
        printf("invalid department\n");
        break;
    }
}