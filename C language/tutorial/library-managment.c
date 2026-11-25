#include <stdio.h>
#include <string.h>

struct Book
{
    int price;
    char title[20];
    int publishYear;
};

struct Book createBook(int price, char title[20], int year)
{
    struct Book b;
    b.price = price;
    strcpy(b.title, title);
    b.publishYear = year;
    return b;
}

int main()
{
    struct Book b1;
    b1 = createBook(200, "meri book", 2026);

    printf("%d", b1.price);
}