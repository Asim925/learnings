#include <stdio.h>
#include <string.h>
int main()
{
    int n = 5;
    char students[n][10];
    for (int i = 0; i < n; i++)
    {
        printf("Enter name %d: ", i + 1);
        fgets(students[i], sizeof(students[i]), stdin);
        students[i][strcspn(students[i], "\n")] = '\0';
    }

    printf("\nMark attendance (P/A):\n");
    char attendence[n];
    int p = 0, a = 0;
    for (int i = 0; i < n; i++)
    {
        printf("%s : ", students[i]);
        scanf(" %c", &attendence[i]);
        attendence[i] == 'A' ? a++ : p++;
    }

    printf("\n--- attendence sheet ----:\n");
    for (int i = 0; i < n; i++)
    {
        if (attendence[i] == 'P')
            printf("%d. %s: Present\n", i + 1, students[i]);
        else
            printf("%d. %s: Absent\n", i + 1, students[i]);
    }
    printf("Presents: %d, absents: %d\n", p, a);
    if (a)
    {

        printf("Absent students: ");
        int first = 1;
        for (int i = 0; i < n; i++)
        {
            if (attendence[i] == 'A')
            {
                if (!first)
                    printf(" ,");
                printf(" %s ", students[i]);
            }

            first = 0;
        }
    }
    else
        printf("all students are present");
}