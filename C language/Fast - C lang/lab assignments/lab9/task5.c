#include <stdio.h>

int main()
{
    FILE *fp;
    char name[50];
    int qty;
    float price;

    fp = fopen("sales.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening file for writing.\n");
        return 1;
    }

    for (int i = 1; i <= 3; i++)
    {
        printf("Enter item %d (name quantity price): ", i);
        if (scanf("%49s %d %f", name, &qty, &price) != 3)
        {
            printf("Invalid input format.\n");
            fclose(fp);
            return 1;
        }
        fprintf(fp, "%s %d %.2f\n", name, qty, price);
    }

    fclose(fp);

    fp = fopen("sales.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file for reading.\n");
        return 1;
    }

    float grandTotal = 0.0f;
    printf("%-12s %-6s %-10s %-10s\n", "Item", "Qty", "Price", "Total");

    while (fscanf(fp, "%49s %d %f", name, &qty, &price) == 3)
    {
        float itemTotal = qty * price;
        grandTotal += itemTotal;
        printf("%-12s %-6d %-10.2f %-10.2f\n", name, qty, price, itemTotal);
    }

    fclose(fp);

    printf("Grand total: %.2f\n", grandTotal);

    return 0;
}