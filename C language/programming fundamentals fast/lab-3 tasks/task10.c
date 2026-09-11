#include <stdio.h>

int main()
{
    float principalAmount, rate, time, simpleInterest;

    printf("Enter principal amount: ");
    scanf("%f", &principalAmount);

    printf("Enter interest rate: ");
    scanf("%f", &rate);

    printf("Enter time in years: ");
    scanf("%f", &time);

    simpleInterest = principalAmount + (principalAmount * (rate / 100)) * time;
    printf("simple interest = %.2f", simpleInterest);
    return 0;
}