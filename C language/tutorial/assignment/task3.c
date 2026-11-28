#include <stdio.h>
#include <stdlib.h>

struct Book
{
    int id;
    char title[100];
    float price;
    int quantity;
};

struct Book *allocateBooks(int n)
{
    struct Book *books = (struct Book *)malloc(n * sizeof(struct Book));
    return books;
}

void inputBooks(struct Book *books, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Book %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &books[i].id);
        printf("Title: ");
        scanf(" %[^\n]", books[i].title);
        printf("Price: ");
        scanf("%f", &books[i].price);
        printf("Quantity: ");
        scanf("%d", &books[i].quantity);
    }
}

void displayBooks(struct Book *books, int n)
{
    printf("\n%-8s %-25s %-12s %-6s\n", "ID", "Title", "Price", "Qty");
    for (int i = 0; i < n; i++)
    {
        printf("%-8d %-25s %-12.2f %-6d\n", books[i].id, books[i].title, books[i].price, books[i].quantity);
    }
    printf("\n");
}

float calculateTotalValue(struct Book *books, int n)
{
    float total = 0.0;
    for (int i = 0; i < n; i++)
    {
        total = total + (books[i].price * books[i].quantity);
    }
    return total;
}

int findMostExpensive(struct Book *books, int n)
{
    int maxIndex = 0;
    for (int i = 1; i < n; i++)
    {
        if (books[i].price > books[maxIndex].price)
        {
            maxIndex = i;
        }
    }
    return maxIndex;
}

float calculateMedianPrice(struct Book *books, int n)
{
    float *prices = (float *)malloc(n * sizeof(float));
    if (prices == NULL)
    {
        return 0.0;
    }

    for (int i = 0; i < n; i++)
    {
        prices[i] = books[i].price;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (prices[j] > prices[j + 1])
            {
                float temp = prices[j];
                prices[j] = prices[j + 1];
                prices[j + 1] = temp;
            }
        }
    }

    float median;
    if (n % 2 == 1)
    {
        median = prices[n / 2];
    }
    else
    {
        median = (prices[(n / 2) - 1] + prices[n / 2]) / 2.0;
    }

    free(prices);
    return median;
}

float calculateReorderCost(struct Book *books, int n, int *reorderCount)
{
    float totalCost = 0.0;
    *reorderCount = 0;

    printf("Reorder report (stock below 5, restock to 10 copies):\n");
    for (int i = 0; i < n; i++)
    {
        if (books[i].quantity < 5)
        {
            int copiesToOrder = 10 - books[i].quantity;
            float cost = copiesToOrder * (books[i].price * 0.80);
            printf("%s - order %d copies - Rs. %.2f\n", books[i].title, copiesToOrder, cost);
            totalCost = totalCost + cost;
            (*reorderCount)++;
        }
    }

    return totalCost;
}

int main()
{
    int n;

    do
    {
        printf("Number of books: ");
        scanf("%d", &n);
    } while (n <= 0);

    struct Book *books = allocateBooks(n);
    if (books == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    inputBooks(books, n);
    displayBooks(books, n);

    float totalValue = calculateTotalValue(books, n);
    printf("Total inventory value: Rs. %.2f\n", totalValue);

    int maxIndex = findMostExpensive(books, n);
    printf("Most expensive book: %s (Rs. %.2f)\n", books[maxIndex].title, books[maxIndex].price);

    float medianPrice = calculateMedianPrice(books, n);
    printf("Median price: Rs. %.2f\n\n", medianPrice);

    int reorderCount = 0;
    float totalReorderCost = calculateReorderCost(books, n, &reorderCount);

    if (reorderCount == 0)
    {
        printf("No books need to be reordered.\n");
    }
    else
    {
        printf("Books to reorder: %d\n", reorderCount);
        printf("Total reorder cost: Rs. %.2f\n", totalReorderCost);
    }

    free(books);
    return 0;
}