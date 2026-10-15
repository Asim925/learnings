// #include <stdio.h>
// int main()
// {

//     int arr[2][2];

//     for (int i = 0; i < 2; i++)
//     {
//         printf("enter the space seeprated values of the row %d\n", i + 1);
//         for (int j = 0; j < 2; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//         printf("\n");
//     }

//     printf("%d %d %d %d", arr[0][0], arr[0][1], arr[1][0], arr[1][1]);

//     return 0;
// }

// sum of student and their marks in 4 subjects
// #include <stdio.h>
// int main()
// {
//     int s1 = 0, s2 = 0, s3 = 0;
//     int marks[3][4];
//     for (int i = 0; i < 3; i++)
//     {
//         printf("Enter the space seperated marks for 4 subjects of student %d: \n", i + 1);
//         for (int j = 0; j < 4; j++)
//         {
//             printf("\tenter marks of subject %d: ", j + 1);
//             scanf("%d", &marks[i][j]);
//             if (i == 0)
//                 s1 += marks[i][j];
//             else if (i == 1)
//                 s2 += marks[i][j];
//             else if (i == 2)
//                 s3 += marks[i][j];
//         }
//     }

//     for (int i = 0; i < 3; i++)
//     {
//         printf("Student %d: ", i + 1);
//         for (int j = 0; j < 4; j++)
//         {
//             printf("%d ", marks[i][j]);
//         }

//         printf(" | Total = %d\n", i == 0 ? s1 : i == 1 ? s2
//                                                        : s3);
//     }
//     return 0;
// }

// sum of all elements

// #include <stdio.h>
// int main()
// {

//     int arr[2][3] = {{20, 12, 13}, {14, 14, 12}};
//     int total = 0;
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             total += arr[i][j];
//         }
//     }
//     printf("Total is : %d", total);
//     return 0;
// }