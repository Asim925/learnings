#include <stdio.h>

// non return type + general funtion:
// void printKrdo()
// {
//     printf("Hello world");
// }

// return type + general funtion:
// int sum()
// {
//     return 5 + 6;
// }

// non return type + parametric funtion:
// void conditionalRender(int button)
// {
//     if (button)
//         printf("light on krdo");
//     else
//         printf("light nahi on hosakti");
// }

// int barasum(int a, int b)
// {
//     return a + b;
// }

int main()
{
    int a = 56;
    int *address = &a;
    printf("%d\n", a);
    printf("%d\n", &a);
    printf("%d\n", address);
    printf("%d\n", *address);
    printf("%d\n", &address);
    return 0;
}