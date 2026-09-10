// #include <stdio.h>
// int main()
// {
//     int num1, num2;
//     char operator;

//     printf("input first value: ");
//     scanf("%d", &num1);

//     printf("input second value: ");
//     scanf("%d", &num2);

//     printf("input operator (+ , - , * , /) : ");
//     scanf(" %c", &operator);

//     if (operator == '+')
//         printf("the sum is %d", num1 + num2);
//     else if (operator == '-')
//         printf("the subtraction is %d", num1 - num2);
//     else if (operator == '*')
//         printf("the product is %d", num1 * num2);
//     else
//         printf("the quotient is %d", num1 / num2);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char c;
//     printf("Enter a character: ");
//     scanf(" %c", &c);
//     if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
//         printf("the character is a vowel");
//     else
//         printf("character is a consonent");

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     float phy, chem, math;
//     printf("enter marks of phy: ");
//     scanf("%f", &phy);

//     printf("enter marks of chem: ");
//     scanf("%f", &chem);

//     printf("enter marks of math: ");
//     scanf("%f", &math);

//     float percentage = (phy + math + chem) * .333;

//     printf("%f\n", percentage);
//     if (percentage > 89)
//         printf("A");
//     else if (percentage > 79)
//         printf("B");
//     else if (percentage > 69)
//         printf("C");
//     else if (percentage > 59)
//         printf("D");
//     else
//         printf("F");

//     return 0;
// }

#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);

    switch (c)
    {
    case 'a':
        printf("vowel");
        break;

    default:
        printf("not a vowel");
        break;
    }
}