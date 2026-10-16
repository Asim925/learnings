// #include <stdio.h>
// int main()
// {
//     int N, small, large, medium, feedbackscore = 0;
//     printf("enter the number of cars for parking: ");
//     scanf("%d", &N);

//     printf("enter the number of small parking: ");
//     scanf("%d", &small);
//     printf("enter the number of large parking: ");
//     scanf("%d", &large);
//     printf("enter the number of medium parking: ");
//     scanf("%d", &medium);

//     for (int i = 1; i <= N; i++)
//     {
//         char type;
//         printf("enter type of car (s/S for small | l/L for large | m/M for medium): ");
//         scanf(" %c", &type);

//         if (type == 's' || type == 'S')
//         {
//             if (large > 0)
//             {
//                 printf("\nYou can park in the large space.\n");
//                 feedbackscore += 15;
//                 large--;
//             }
//             else if (medium > 0)
//             {
//                 printf("\nYou can park in the medium space.\n");
//                 feedbackscore += 10;
//                 medium--;
//             }
//             else if (small > 0)
//             {
//                 printf("\nYou can park in the small space.\n");
//                 feedbackscore += 5;
//                 small--;
//             }
//             else
//             {
//                 printf("No space left.");
//                 feedbackscore -= 50;
//             }
//         }
//         else if (type == 'M' || type == 'm')
//         {
//             if (large > 0)
//             {
//                 printf("\nYou can park in the large space.\n");
//                 feedbackscore += 10;
//                 large--;
//             }
//             else if (medium > 0)
//             {
//                 printf("\nYou can park in the medium space.\n");
//                 feedbackscore += 5;
//                 medium--;
//             }
//             else
//             {
//                 printf("No space left.");
//                 feedbackscore -= 50;
//             }
//         }
//         else if (type == 'L' || type == 'l')
//         {
//             if (large > 0)
//             {
//                 printf("\nYou can park in the large space.\n");
//                 feedbackscore += 5;
//                 large--;
//             }
//             else
//             {
//                 printf("\nNo space left.\n");
//                 feedbackscore -= 50;
//             }
//         }
//         else
//             printf("\ninvalid car type\n");
//     }

//     printf("\nfeedbackscore is %d\nThe parking in small space used: %d slots\nThe parking in medium space used: %d slots\nThe parking in large space used: %d slots", feedbackscore, small, medium, large);
//     return 0;
// }

// =============== HOUR GLASS =============== //
// #include <stdio.h>
// int main()
// {

//     int n = 3;
//     int spaces = 0;
//     for (int i = 1; i <= 2 * n - 1; i++)
//     {
//         for (int k = 1; k <= spaces; k++)
//         {
//             printf("  ");
//         }
//         for (int j = 1; j <= 2 * n - 1 - (spaces * 2); j++)
//         {
//             printf("* ");
//         }
//         if (i < n)
//             spaces++;
//         else
//             spaces--;
//         printf("\n");
//     }
//     return 0;
// }

// =========== HOUR GLASS =============
// #include <stdio.h>
// int main()
// {
//     int n = 3;
//     int spaces = 0;
//     int stars = 2 * n - 1;

//     for (int row = 1; row <= 2 * n - 1; row++)
//     {
//         for (int element = 1; element <= 2 * n - 1 - spaces; element++)
//         {
//             if (element <= spaces)
//                 printf("  ");
//             else
//                 printf("* ");
//         }
//         if (row < 3)
//         {
//             spaces++;
//             stars -= 2;
//         }
//         else
//         {
//             spaces--;
//             stars += 2;
//         }

//         printf("\n");
//     }
//     return 0;
// }

// =========== DIAMOND ============= //