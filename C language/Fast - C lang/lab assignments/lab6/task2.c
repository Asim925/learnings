#include <stdio.h>
int main()
{
    int n, total = 0;
    printf("enter no. of students: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int score;
        printf("enter score of student %d: ", i);
        scanf("%d", &score);
        total += score;
    }

    float avg = total / n;
    printf("total score is %d\naverage score is: %.2f", total, avg);
    return 0;
}