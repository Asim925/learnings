#include <stdio.h>
int main()
{
    int N;
    float revenue = 0;
    printf("Enter the number of guests: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        int nights;
        printf("how many nights guest %d wants to stay: ", i);
        scanf("%d", &nights);

        char season;
        printf("enter y for peak season OR n for offpeak season: ");
        scanf(" %c", &season);

        char roomType;
        printf("enter room type (A for Standard, B for deluxe, C for Suite): ");
        scanf(" %c", &roomType);

        float price = 0;

        if (season == 'y')
        {
            price = (roomType == 'A'   ? 5000
                     : roomType == 'B' ? 8000
                                       : 12000) *
                    nights;
        }
        else
        {
            price = (roomType == 'A'   ? 3000
                     : roomType == 'B' ? 5000
                                       : 8000) *
                    nights;
        }

        revenue += (nights <= 7 ? price : price * 0.85);
    }

    printf("The revenue generated is: %.2f", revenue);
    return 0;
}