// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter value of an integer: ");
//     scanf("%d", &n);
//     n % 2 == 0 ? printf("even number\n") : printf("odd number\n");
//     return 0;
// }

#include <stdio.h>
int main()
{
    int score;
    printf("enter score : ");
    scanf("%d", &score);
    score >= 50 ? printf("pass\n") : printf("fail\n");
    return 0;
}