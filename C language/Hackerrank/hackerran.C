// ========================= Functions ========================= //

// #include <stdio.h>
// /*
// Add `int max_of_four(int a, int b, int c, int d)` here.
// */

// int max_of_four(int a, int b, int c, int d)
// {
//     if (a > b && a > c && a > d)
//         return a;
//     else if (b > a && b > c && b > d)
//         return b;
//     else if (c > a && c > b && c > d)
//         return c;
//     else
//         return d;
// }

// int main()
// {
//     int a, b, c, d;
//     scanf("%d %d %d %d", &a, &b, &c, &d);
//     int ans = max_of_four(a, b, c, d);
//     printf("%d", ans);

//     return 0;
// }

// ========================= pointers ========================= //

// #include <stdio.h>

// void update(int *a, int *b)
// {
//     // Complete this function
//     int A = *a, B = *b;
//     A = *a + *b;
//     B = (*a - *b > 0 ? *a - *b : *b - *a);

//     *a = A;
//     *b = B;
// }

// int main()
// {
//     int a, b;
//     int *pa = &a, *pb = &b;

//     scanf("%d %d", &a, &b);
//     update(pa, pb);
//     printf("%d\n%d", a, b);

//     return 0;
// }

// ========================= if else ========================= //

// #include <stdio.h>
// int main()
// {
//     int n = 5;
//     if (n == 1)
//         printf("one");
//     else if (n == 2)
//         printf("two");
//     else if (n == 3)
//         printf("three");
//     else if (n == 4)
//         printf("four");
//     else if (n == 5)
//         printf("five");
//     else if (n == 6)
//         printf("six");
//     else if (n == 7)
//         printf("seven");
//     else if (n == 8)
//         printf("eight");
//     else if (n == 9)
//         printf("nine");
//     else
//         printf("Greater than 9");
//     return 0;
// }

// ========================= loop ========================= //

// #include <stdio.h>
// int main()
// {
//     int a, b;
//     scanf("%d\n%d", &a, &b);
//     // Complete the code.
//     for (int i = a; i <= b; i++)
//     {
//         if (i == 1)
//             printf("one");
//         else if (i == 2)
//             printf("two");
//         else if (i == 3)
//             printf("three");
//         else if (i == 4)
//             printf("four");
//         else if (i == 5)
//             printf("five");
//         else if (i == 6)
//             printf("six");
//         else if (i == 7)
//             printf("seven");
//         else if (i == 8)
//             printf("eight");
//         else if (i == 9)
//             printf("nine");
//         else if (i > 9 && i % 2 == 0)
//             printf("even");
//         else
//             printf("odd");

//         printf("\n");
//     }
//     return 0;
// }

// ========================= SUm of 5 digit number ========================= //

// #include <stdio.h>

// int main()
// {

//     int n = 10123;
//     // scanf("%d", &n);
//     // Complete the code to calculate the sum of the five digits on n.

//     int sum = n % 10 + ((n / 10) % 10) + ((n / 100) % 10) + ((n / 1000) % 10) + ((n / 10000) % 10);
//     printf("%d", sum);
//     return 0;
// }

// ========================= Bitwise operation ========================= //

// #include <stdio.h>

// void calculate_the_maximum(int n, int k)
// {

//     int maxAnd = 0;
//     int maxOr = 0;
//     int maxXor = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = i + 1; j <= n; j++)
//         {
//             int AND = i & j;
//             int OR = i | j;
//             int XOR = i ^ j;

//             if (AND < k && AND > maxAnd)
//                 maxAnd = AND;
//             if (OR < k && OR > maxOr)
//                 maxOr = OR;
//             if (XOR < k && XOR > maxXor)
//                 maxXor = XOR;
//         }
//     }
//     printf("%d\n%d\n%d\n", maxAnd, maxOr, maxXor);
// }

// int main()
// {
//     int n, k;

//     scanf("%d %d", &n, &k);
//     calculate_the_maximum(n, k);

//     return 0;
// }

// ========================= Arrays and string ========================= //

// #include <stdio.h>

// int main()
// {

//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//     int n;
//     scanf("%d", &n);
//     int *arr[n];

//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int element;
//         scanf("%d", &element);
//         arr[i] = element;
//         sum += element;
//         }
//     printf("%d", sum);
//     return 0;
// }

// ========================= Recursion ========================= //

// #include <stdio.h>

// // Complete the following function.

// int find_nth_term(int n, int a, int b, int c)
// {
//     if (n == 1)
//         return a;
//     if (n == 2)
//         return b;
//     if (n == 3)
//         return c;
//     return find_nth_term(n - 1, a, b, c) + find_nth_term(n - 2, a, b, c) + find_nth_term(n - 3, a, b, c);
// }

// int main()
// {
//     int n, a, b, c;

//     scanf("%d %d %d %d", &n, &a, &b, &c);
//     int ans = find_nth_term(n, a, b, c);

//     printf("%d", ans);
//     return 0;
// }

// ========================= Student marks sum ========================= //

// #include <stdio.h>

// int marks_summation(int *marks, int number_of_students, char gender)
// {
//     int sum = 0;
//     for (int i = gender == 'g' ? 1 : 0; i < number_of_students; i += 2)
//     {
//         sum += marks[i];
//     }
//     return sum;
// }

// int main()
// {
//     int number_of_students;
//     char gender;
//     int sum;

//     scanf("%d", &number_of_students);
//     int *marks = (int *)malloc(number_of_students * sizeof(int));

//     for (int student = 0; student < number_of_students; student++)
//     {
//         scanf("%d", (marks + student));
//     }

//     scanf(" %c", &gender);
//     sum = marks_summation(marks, number_of_students, gender);
//     printf("%d", sum);
//     free(marks);

//     return 0;
// }

// ========================= Printing Tokens ========================= //
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main()
// {

//     char *s;
//     s = malloc(1024 * sizeof(char));
//     scanf("%[^\n]", s);
//     s = realloc(s, strlen(s) + 1);

//     // Write your logic to print the tokens of the sentence here.

//     for (int i = 0; s[i] != '\0'; i++)
//     {
//         if (s[i] == ' ')

//             printf("\n");
//         else
//             printf("%c", s[i]);
//     }
//     return 0;
// }

// ========================= Digit Frequency ========================= //

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main()
// {

//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//     char s[1000];
//     scanf("%s", s);
//     int zero = 0, one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0;
//     for (int i = 0; i < 1000; i++)
//     {
//         if (s[i] >= 96)
//             continue;
//         else if (s[i] == '\0')
//             break;
//         else if (s[i] == '0')
//             zero++;
//         else if (s[i] == '1')
//             one++;
//         else if (s[i] == '2')
//             two++;
//         else if (s[i] == '3')
//             three++;
//         else if (s[i] == '4')
//             four++;
//         else if (s[i] == '5')
//             five++;
//         else if (s[i] == '6')
//             six++;
//         else if (s[i] == '7')
//             seven++;
//         else if (s[i] == '8')
//             eight++;
//         else if (s[i] == '9')
//             nine++;
//     }

//     printf("%d %d %d %d %d %d %d %d %d %d", zero, one, two, three, four, five, six, seven, eight, nine);

//     return 0;
// }

// ========================= Boxes throught tunnel ========================= //

// #include <stdio.h>
// #include <stdlib.h>
// #define MAX_HEIGHT 41

// struct box
// {
//     int length;
//     int width;
//     int height;
// };

// typedef struct box box;

// int get_volume(box b)
// {
//     return b.length * b.height * b.width;
// }

// int is_lower_than_max_height(box b)
// {
//     /**
//      * Return 1 if the box's height is lower than MAX_HEIGHT and 0 otherwise
//      */
//     if (b.height < MAX_HEIGHT)
//         return 1;
//     return 0;
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     box *boxes = malloc(n * sizeof(box));
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (is_lower_than_max_height(boxes[i]))
//         {
//             printf("%d\n", get_volume(boxes[i]));
//         }
//     }
//     return 0;
// }

// ========================= printing patterb ========================= //

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int abs(int val) { return val * (-1); }

int main()
{

    int n = 5;
    // scanf("%d", &n);
    // Complete the code to print the pattern.
    for (int i = 0; i <= n; i++)
    {
        int num = n;
        for (int j = 0; j < n * 2; j++)
        {
            if (j == n)
                continue;
            printf("%d ", abs(num));

            // logic
            if (i > j % n)
            {
                if (n - (j % n) < n)
                    num++;

                else if (j <= n)
                    num--;
            }
        }
        printf("\n");
    }
    return 0;
}
