#include <stdio.h>

int validateWithdrawal(float balance, float amount)
{
    if (amount <= 0 || (int)amount % 500 != 0)
    {
        return 0;
    }

    if (amount > balance)
    {
        return -1;
    }

    if (balance - amount < 1000)
    {
        return -2;
    }

    return 1;
}

float withdraw(float balance, float amount)
{
    return balance - amount;
}

void showMessage(int code)
{
    if (code == 1)
    {
        printf("withdrawal succesful.\n");
    }
    else if (code == 0)
    {
        printf("error: amount must be multiple of rs. 500.\n");
    }
    else if (code == -1)
    {
        printf("error: not enough balance.\n");
    }
    else if (code == -2)
    {
        printf("error: minimum balance of rs. 1000 must be maintaned.\n");
    }
}

int main()
{
    float balance = 10000;
    float amount;
    int code;

    printf("current balance: %.2f\n", balance);

    do
    {
        printf("enter amount (0 to exit): ");
        scanf("%f", &amount);

        if (amount != 0)
        {
            code = validateWithdrawal(balance, amount);
            showMessage(code);

            if (code == 1)
            {
                balance = withdraw(balance, amount);
                printf("new balance: %.2f\n", balance);
            }
        }
    } while (amount != 0);

    return 0;
}