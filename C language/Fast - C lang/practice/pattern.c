
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

#include <stdio.h>
int main()
{
    int rows = 5;
    int spaces = rows / 2;
    int stars = 1;
    for (int i = 1; i <= rows; i++)
    {
        for (int element = 1; element <= spaces + stars; element++)
        {
            if (spaces >= element)
                printf("  ");
            else
                printf("* ");
        }
        if (i <= (rows / 2))
        {
            spaces--;
            stars += 2;
        }
        else
        {
            spaces++;
            stars -= 2;
        }
        printf("\n");
    }
}