#include <stdio.h>
int main()
{
    int N, small, large, medium, feedbackscore = 0;
    printf("enter the number of cars for parking: ");
    scanf("%d", &N);

    printf("enter the number of small parking: ");
    scanf("%d", &small);
    printf("enter the number of large parking: ");
    scanf("%d", &large);
    printf("enter the number of medium parking: ");
    scanf("%d", &medium);

    for (int i = 1; i <= N; i++)
    {
        char type;
        printf("enter type of car (s/S for small | l/L for large | m/M for medium): ");
        scanf(" %c", &type);

        if (type == 's' || type == 'S')
        {
            if (large > 0)
            {
                printf("\nYou can park in the large space.\n");
                feedbackscore += 15;
                large--;
            }
            else if (medium > 0)
            {
                printf("\nYou can park in the medium space.\n");
                feedbackscore += 10;
                medium--;
            }
            else if (small > 0)
            {
                printf("\nYou can park in the small space.\n");
                feedbackscore += 5;
                small--;
            }
            else
            {
                printf("No space left.");
                feedbackscore -= 50;
            }
        }
        else if (type == 'M' || type == 'm')
        {
            if (large > 0)
            {
                printf("\nYou can park in the large space.\n");
                feedbackscore += 10;
                large--;
            }
            else if (medium > 0)
            {
                printf("\nYou can park in the medium space.\n");
                feedbackscore += 5;
                medium--;
            }
            else
            {
                printf("No space left.");
                feedbackscore -= 50;
            }
        }
        else if (type == 'L' || type == 'l')
        {
            if (large > 0)
            {
                printf("\nYou can park in the large space.\n");
                feedbackscore += 5;
                large--;
            }
            else
            {
                printf("\nNo space left.\n");
                feedbackscore -= 50;
            }
        }
        else
            printf("\ninvalid car type\n");
    }

    printf("\nfeedbackscore is %d\nThe parking in small space used: %d slots\nThe parking in medium space used: %d slots\nThe parking in large space used: %d slots", feedbackscore, small, medium, large);
    return 0;
}