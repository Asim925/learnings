#include <stdio.h>

int main()
{
    int roll;
    int marks;
    float percentage;
    printf("Enter roll number, marks and percentage: ");
    scanf("%d %d %f", &roll, &marks, &percentage);

    printf("\nRoll Number: %d\n", roll);
    printf("Marks: %d\n", marks);
    printf("Percentage: %.2f", percentage);
    return 0;
}