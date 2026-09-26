#include <stdio.h>
int main()
{
    int age, price = 1000;
    char day;
    float discount = 0;

    printf("enter your age: ");
    scanf("%d", &age);

    printf("enter the day (H/W): ");
    scanf(" %c", &day);

    if ((age < 12 || age > 60))
    {
        printf("You got the 10 percent age discount\n");
        discount = 0.1;
        if (day == 'W')
        {
            printf("You got the 10 percent weekend discount too\n");
            discount += 0.09;
        }
    }
    else if (day == 'W')
    {
        printf("You got the weekend discount\n");
        discount = 0.1;
    }

    printf("Your total bill is: %.2f", price * (1 - discount));
    return 0;
}