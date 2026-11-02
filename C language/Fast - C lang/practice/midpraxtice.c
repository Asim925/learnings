// #include <stdio.h>

// int main()
// {
//     char secret[] = "stunt";
//     char guess[6];

//     int attempt, i, j;
//     int right, found, won = 0;

//     for (attempt = 1; attempt <= 6; attempt++)
//     {

//         printf("\nEnter a 5-letter word: ");
//         scanf("%5s", guess);

//         right = 0;

//         for (i = 0; i < 5; i++)
//         {

//             if (guess[i] == secret[i])
//             {
//                 printf("[%c] ", guess[i]);
//                 right++;
//             }
//             else
//             {
//                 found = 0;

//                 for (j = 0; j < 5; j++)
//                 {
//                     if (guess[i] == secret[j])
//                     {
//                         found = 1;
//                     }
//                 }

//                 if (found == 1)
//                 {
//                     printf("(%c) ", guess[i]);
//                 }
//                 else
//                 {
//                     printf(" X  ");
//                 }
//             }
//         }

//         printf("\n");

//         if (right == 5)
//         {
//             won = 1;
//             break;
//         }
//     }

//     if (won == 1)
//     {
//         printf("You won!\n");
//     }
//     else
//     {
//         printf("Game over! The word was stunt.\n");
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n = 5;
//     int arr[5][5] = {
//         {1, 2, 3, 4, 5},
//         {6, 7, 8, 9, 10},
//         {11, 12, 13, 14, 15},
//         {16, 17, 18, 19, 20},
//         {21, 22, 23, 24, 25}};

//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             if (i == j)
//                 continue;
//             int temp = arr[i][j];
//             arr[i][j] = arr[j][i];
//             arr[j][i] = temp;
//         }
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
// }

#include <stdio.h>
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        printf("row %d: ", i);
        int spaces = 0;
        int letters = n;
        for (int j = 97; j <= 97 + n; j++)
        {
        }
    }
}