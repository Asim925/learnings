#include <stdio.h>

int findTotal(int marks[], int size)
{
    int i;
    int total = 0;

    for (i = 0; i < size; i++)
    {
        total += marks[i];
    }

    return total;
}

float findPercentage(int total, int size)
{
    return (float)total / (size * 100) * 100;
}

char findGrade(float percentage)
{
    if (percentage >= 80)
    {
        return 'A';
    }
    else if (percentage >= 60)
    {
        return 'B';
    }
    else if (percentage >= 40)
    {
        return 'C';
    }
    else
    {
        return 'F';
    }
}

int findMax(int marks[], int size)
{
    int i;
    int highest = marks[0];

    for (i = 1; i < size; i++)
    {
        if (marks[i] > highest)
        {
            highest = marks[i];
        }
    }

    return highest;
}

int findMin(int marks[], int size)
{
    int i;
    int lowest = marks[0];

    for (i = 1; i < size; i++)
    {
        if (marks[i] < lowest)
        {
            lowest = marks[i];
        }
    }

    return lowest;
}

void printReport(int marks[], int size)
{
    int total = findTotal(marks, size);
    float percentage = findPercentage(total, size);
    char grade = findGrade(percentage);

    printf("total marks: %d\n", total);
    printf("your percentage: %.2f%%\n", percentage);
    printf("final grade: %c\n", grade);
    printf("highest marks: %d\n", findMax(marks, size));
    printf("lowest marks: %d\n", findMin(marks, size));
}

int main()
{
    int marks[5];
    int i;

    printf("enter 5 marks: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }

    printReport(marks, 5);

    return 0;
}