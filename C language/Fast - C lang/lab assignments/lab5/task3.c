#include <stdio.h>
int main()
{
    int A, B, C, D;
    printf("enter space seperated 4 integers: ");
    scanf("%d %d %d %d", &A, &B, &C, &D);

    if (A > B)
    {
        if (A > C)
        {
            if (A > D)
                printf("A is the largest: %d", A);
            else
                printf("D is the largest: %d", D);
        }
        else
        {
            if (C > D)
                printf("C is the largest: %d", C);
            else
                printf("D is the largest: %d", D);
        }
    }
    else if (B > C)
    {
        if (B > A)
        {
            if (B > D)
                printf("B is the largest: %d", B);
            else
                printf("D is the largest: %d", D);
        }
        else
        {
            if (A > C)
                printf("A is the largest: %d", A);
            else
                printf("C is the largest: %d", C);
        }
    }
    else if (C > D)
    {
        if (C > A)
        {
            if (C > B)
                printf("C is the largest: %d", C);
            else
                printf("B is the largest: %d", B);
        }
        else
        {
            if (A > B)
                printf("A is the largest: %d", A);
            else
                printf("B is the largest: %d", B);
        }
    }
    else if (D > A)
    {
        if (D > B)
        {
            if (D > C)
                printf("D is the largest: %d", D);
            else
                printf("C is the largest: %d", C);
        }
        else
        {
            if (B > C)
                printf("B is the largest: %d", B);
            else
                printf("C is the largest: %d", C);
        }
    }
    return 0;
}