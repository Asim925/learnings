#include <stdio.h>
int main()
{
    int account, transaction;
    printf("enter account type (1 for savings, 2 for current): ");
    scanf("%d", &account);

    switch (account)
    {
    case 1:
        printf("enter transaction (1 deposit, 2 withdraw, 3 check balance): ");
        scanf("\n%d", &transaction);

        switch (transaction)
        {
        case 1:
            printf("deposit done in savings account");
            break;

        case 2:
            printf("withdraw done from savings account");
            break;

        case 3:
            printf("checking balance of savings account");
            break;

        default:
            printf("invalid transaction");
        }
        break;

    case 2:
        printf("enter transaction (1 deposit, 2 withdraw, 3 check balance): ");
        scanf("\n%d", &transaction);

        switch (transaction)
        {
        case 1:
            printf("deposit done in current account");
            break;

        case 2:
            printf("withdraw done from current account");
            break;

        case 3:
            printf("checking balance of current account");
            break;

        default:
            printf("invalid transaction");
        }
        break;

    default:
        printf("invalid account type");
    }

    return 0;
}