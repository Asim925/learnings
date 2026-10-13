// ===========  Weekly Weather Station ========== //

// #include <stdio.h>
// int main()
// {
//     int temp[7], total = 0;
//     printf("enter the 7 temperatures: ");
//     for (int i = 0; i < 7; i++)
//     {
//         scanf("%d", &temp[i]);
//     }
//
//     int max = temp[0], maxIndex;
//     int min = temp[0], minIndex;
//     int aboves = 0;
//     float avg = total / 7.0;
//     for (int i = 0; i < 7; i++)
//     {
//       total += temp[i];
//       if (max < temp[i])
//         {
//             maxIndex = i;
//             max = temp[i];
//         }
//         if (min > temp[i])
//         {
//             minIndex = i;
//             min = temp[i];
//         }
//         if (temp[i] > avg)
//             aboves++;
//     }

//     printf("\nHighest %d on Day %d\n", max, maxIndex + 1);
//     printf("Lowest %d on Day %d\n", min, minIndex + 1);
//     printf("Average %.2f\n", avg);
//     printf("Days above average %d\n", aboves);
//     return 0;
// }

// =========== Exam Result Analyzer ========== //
// #include <stdio.h>
// int main()
// {
//     int marks[8];
//     int A = 0, B = 0, C = 0, F = 0;

//     for (int i = 0; i < 8; i++)
//     {
//         printf("Marks of student %d: ", i + 1);
//         scanf("%d", &marks[i]);

//         while (marks[i] > 100 || marks[i] < 0)
//         {
//             printf("Invalid! Enter again (0-100): ");
//             scanf("%d", &marks[i]);
//         }
//         if (marks[i] > 79)
//             A++;
//         else if (marks[i] > 59)
//             B++;
//         else if (marks[i] > 39)
//             C++;
//         else
//         {
//             F++;
//         }
//     }

//     printf("A: %d  B: %d  C: %d  F: %d\n", A, B, C, F);
//     if (F > 0)
//     {
//         printf("Failed Roll numbers: ");
//         for (int i = 0; i < 8; i++)
//         {
//             if (marks[i] < 40)
//                 printf("%d ", i + 1);
//         }
//     }
//     else
//         printf("Nobody Failed !");

//     float passPercent = ((8.00 - F) / 8.00) * 100.00;
//     printf("\nPass percentage is %.2f%%\n", passPercent);
//     return 0;
// }

// // ========= Cinema Group Booking ======== //
// #include <stdio.h>
// int main()
// {
//     int seats[] = {1, 0, 0, 1, 0, 0, 0, 1, 0, 0};
//     int N = 1;
//     int totalSeatsUsed = 0;

//     while (N != 0)
//     {
//         printf("enter the number of bookings (0 to stop): ");
//         scanf("%d", &N);
//         if (!N)
//             break;
//         if (N > 10 || N < 1)
//         {
//             printf("Invalid seats");
//             continue;
//         }

//         int count = 0;
//         int seatsAvail = 1;
//         for (int i = 0; i < 10; i++)
//         {
//             if (!seats[i])
//             {
//                 count++;
//                 if (count == N)
//                 {
//                     printf("Booking Seats: ");
//                     while (count > 0)
//                     {
//                         printf("%d ", i - count + 2);
//                         seats[i - count + 1] = 1;
//                         count--;
//                     }
//                     printf("\n");
//                     break;
//                 }
//                 else if (i == 9)
//                 {
//                     seatsAvail = 0;
//                     printf("Not possible: no %d seats together", N);
//                 }
//             }
//             else
//             {
//                 count = 0;
//             }
//         }
//         for (int i = 0; i < 10; i++)
//         {
//             if (seatsAvail)
//                 printf("%d ", seats[i]);
//             if (seats[i] && !N)
//                 totalSeatsUsed++;
//         }
//         printf("\n");
//     }
//     printf("Total booked: %d out of 10\n", totalSeatsUsed);
//     return 0;
// }

// ========= Two arrays comparision ========= //

// #include <stdio.h>
// int main()
// {
//     int arr1[] = {10, 15, 2, 78, 92, 25};
//     int arr2[] = {8, 41, 32, 21, 98, 33};
//     float arr3[6];

//     for (int i = 0; i < 6; i++)
//     {
//         int a1 = arr1[i];
//         int a2 = arr2[5 - i];
//         if (a1 > a2)
//             arr3[i] = a1 + a2;
//         else if (a1 <= a2)
//             arr3[i] = (a1 + a2) / 2.0;
//     }

//     for (int i = 0; i < 3; i++)
//     {
//         printf("Array %d\n", i + 1);
//         for (int j = 0; j < 6; j++)
//         {
//             if (i == 0)
//                 printf("%d ", arr1[j]);
//             else if (i == 1)
//                 printf("%d ", arr2[j]);
//             else
//                 printf("%.1f ", arr3[j]);
//         }
//         printf("\n\n");
//     }
// }

// ========= Two arrays comparision ========= //
// #include <stdio.h>
// int main()
// {
//     printf("how many times you want to roll the dice: ");
//     int rolls;
//     scanf("%d", &rolls);

//     int even = 0, odd = 0, sum = 0, seed = 0;
//     for (int i = 1; i <= rolls; i++)
//     {
//         int current = (seed * (i + 1) % 6) + 1;
//         printf("The current dice rolled gave %d\n", current);
//         sum += current;
//         if (current % 2)
//             odd++;
//         else
//             even++;
//         seed += 4;
//     }

//     printf("\nThe sum is %d,\nThe evens results are %d,\nThe odd results are %d", sum, even, odd);
//     return 0;
// }

//=============== Harshad Numbers ==============//
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter number: ");
//     scanf("%d", &n);

//     int sum = 0;
//     while (n % 10)
//     {
//         sum += n % 10;
//         n /= 10;
//     }
//     if (n % sum)
//         printf("NOT HARSHAD NUMBER");
//     else
//         printf("HARSHAD NUMBER");
//     return 0;
// }

//=============== ANAGRAMS ==============//

#include <stdio.h>
int main()
{

    char one[99], two[99];

    printf("Enter the characters of array 1");
    scanf("%s", one);

    printf("Enter the characters of array 1");
    scanf("%s", two);

    if (sizeof(one) != sizeof(two))
        printf("size dont match");
    else
    {
        for (int i = 0; one[i] != '\0'; i++)
        {
            printf("\nchecking the letter %d\n", i);
            for (int j = i; one[i] != '\0'; j++)
            {
                        }
        }
    }
}