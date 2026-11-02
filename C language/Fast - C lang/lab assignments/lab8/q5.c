#include <stdio.h>

long factorial(int n)
{
    int i;
    long result = 1;

    if (n < 0)
    {
        return -1;
    }

    for (i = 1; i <= n; i++)
    {
        result *= i;
    }

    return result;
}

int reverseNumber(int n)
{
    int reverse = 0;
    int digit;
    int sign = 1;

    if (n < 0)
    {
        sign = -1;
        n = -n;
    }

    while (n > 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    return reverse * sign;
}

int isPalindrome(int n)
{
    if (n < 0)
    {
        return 0;
    }

    return n == reverseNumber(n);
}

int sumOfDigits(int n)
{
    int sum = 0;

    if (n < 0)
    {
        n = -n;
    }

    while (n > 0)
    {
        sum += n % 10;
        n = n / 10;
    }

    return sum;
}

void printFibonacci(int terms)
{
    int i;
    long first = 0;
    long second = 1;
    long next;

    for (i = 1; i <= terms; i++)
    {
        printf("%ld ", first);
        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
}

int main()
{
    int choice;
    int number;
    int terms;
    long result;

    do
    {
        printf("\n1. factorial\n");
        printf("2. reverse number\n");
        printf("3. check palindrome\n");
        printf("4. sum of digits\n");
        printf("5. fibonacci series\n");
        printf("6. exit\n");
        printf("enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4)
        {
            printf("enter number: ");
            scanf("%d", &number);
        }

        switch (choice)
        {
        case 1:
            result = factorial(number);
            if (result == -1)
            {
                printf("factorial is not defined for negative numbers.\n");
            }
            else
            {
                printf("factorial: %ld\n", result);
            }
            break;

        case 2:
            printf("reversed number: %d\n", reverseNumber(number));
            break;

        case 3:
            if (isPalindrome(number))
            {
                printf("%d is a palindrome.\n", number);
            }
            else
            {
                printf("%d is not a palindrome.\n", number);
            }
            break;

        case 4:
            printf("sum of digits: %d\n", sumOfDigits(number));
            break;

        case 5:
            printf("enter number of terms: ");
            scanf("%d", &terms);

            if (terms < 0)
            {
                printf("invalid number of terms.\n");
            }
            else
            {
                printFibonacci(terms);
            }
            break;

        case 6:
            printf("exiting...\n");
            break;

        default:
            printf("invalid choice, try again.\n");
        }
    } while (choice != 6);

    return 0;
}