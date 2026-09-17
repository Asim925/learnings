#include <stdio.h>
int main()
{
    int age, price = 1000;
    char day;
    float discount = 0;

    do
    {
        printf("enter your age: ");
        scanf("%d", &age);
    } while (age < 1);

    do
    {
        printf("enter the day (H/W): ");
        scanf(" %c", &day);
    } while (day != 'H' && day != 'W');

    if ((age < 12 || age > 60) && day == 'W')
    {
        printf("You got the age + weekend discount\n");
        discount = 0.19;
    }
    else if (day == 'W')
    {
        printf("You got the weekend discount\n");
        discount = 0.1;
    }
    else if (age < 12 || age > 60)
    {
        printf("You got the age discount\n");
        discount = 0.1;
    }

    printf("Your total bill is: %.2f", price * (1 - discount));
    return 0;
}