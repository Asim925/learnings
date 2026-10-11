#include <stdio.h>
int main()
{
    int marks = 0, max = 0, min = 999, pass = 0, fail = 0;

    for (int i = 1; i <= 10; i++)
    {
        int current = 0;
        printf("student %d, enter the marks out of 100: ", i);
        scanf("%d", &current);
        marks += current;
        marks >= 50 ? pass++ : fail++;
        min > current ? min = current : min;
        max < current ? max = current : max;
    }
    float avg = marks / 10;

    printf("\nTotal marks: %d\nAverage marks: %.2f\nHighest Marks: %d\nLowest Marks: %d\nNo. of students passed: %d\nNo. of students failed: %d\n", marks, avg, max, min, pass, fail);
    return 0;
}
