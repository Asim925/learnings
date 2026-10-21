#include <stdio.h>
#include <string.h>

void displayMenu()
{
    printf("\n===== UNIVERSITY LIBRARY =====\n");
    printf("1. register member\n");
    printf("2. display available Books\n");
    printf("3. borrow a book\n");
    printf("4. return a book\n");
    printf("5. display ember Record\n");
    printf("6. exit\n");
    printf("Enter your choice : ");
}

void registerMember(char name[], int *studentID, int *memberType)
{
    printf("Enter name (one word, e.g. Ali_Khan): ");
    scanf("%s", name);

    printf("Enter student ID: ");
    scanf("%d", studentID);

    printf("Membership type (1 = Student, 2 = Faculty): ");
    scanf("%d", memberType);
    while (*memberType != 1 && *memberType != 2)
    {
        printf("Invalid! Enter 1 for Student or 2 for Faculty: ");
        scanf("%d", memberType);
    }
    printf("Registration successful!\n");
}

void displayBooks(int bookIDs[], char bookTitles[][50], int availableCopies[], int totalBooks)
{
    int i;
    printf("\n%-6s %-25s %-6s\n", "ID", "Title", "Copies");
    printf("------------------------------------------\n");
    for (i = 0; i < totalBooks; i++)
    {
        printf("%-6d %-25s %-6d\n", bookIDs[i], bookTitles[i], availableCopies[i]);
    }
}

void borrowBook(int bookIDs[], char bookTitles[][50], int availableCopies[], int totalBooks,
                int borrowedBookIDs[], int *borrowedCount, int memberType)
{
    int id, days, i, index = -1, allowed;

    if (*borrowedCount >= 3)
    {
        printf("You cannot borrow more than 3 books at a time.\n");
        return;
    }

    printf("Enter book ID: ");
    scanf("%d", &id);

    for (i = 0; i < totalBooks; i++)
    {
        if (bookIDs[i] == id)
            index = i;
    }

    if (index == -1)
    {
        printf("Invalid book ID.\n");
        return;
    }
    if (availableCopies[index] == 0)
    {
        printf("Sorry, no copies of this book are available.\n");
        return;
    }

    printf("Enter number of days you want to keep the book: ");
    scanf("%d", &days);
    if (days <= 0)
    {
        printf("Days must be positive.\n");
        return;
    }

    if (memberType == 1)
        allowed = 14;
    else
        allowed = 30;

    if (days > allowed)
        printf("Note: your permitted period is %d days. Fine applies after that.\n", allowed);

    borrowedBookIDs[*borrowedCount] = id;
    (*borrowedCount)++;
    availableCopies[index]--;
    printf("You borrowed \"%s\" successfully.\n", bookTitles[index]);
}

float returnBook(int bookIDs[], int availableCopies[], int totalBooks, int borrowedBookIDs[],
                 int *borrowedCount, int memberType, float *totalFine)
{
    int id, days, i, pos = -1, index = -1, allowed, extra;
    float fine = 0, payable = 0;
    char code[50];

    if (*borrowedCount == 0)
    {
        printf("You have not borrowed any book.\n");
        return 0;
    }

    printf("Enter book ID to return: ");
    scanf("%d", &id);

    for (i = 0; i < *borrowedCount; i++)
    {
        if (borrowedBookIDs[i] == id)
            pos = i;
    }
    if (pos == -1)
    {
        printf("You have not borrowed this book.\n");
        return 0;
    }

    printf("Enter actual number of days the book was kept: ");
    scanf("%d", &days);
    if (days <= 0)
    {
        printf("Days must be positive. Return cancelled.\n");
        return 0;
    }

    for (i = 0; i < totalBooks; i++)
    {
        if (bookIDs[i] == id)
            index = i;
    }
    availableCopies[index]++;

    if (memberType == 1)
        allowed = 14;
    else
        allowed = 30;

    if (days > allowed)
    {
        extra = days - allowed;
        if (memberType == 1)
            fine = extra * 20;
        else
            fine = extra * 10;

        printf("Book is late by %d day(s). Fine = Rs. %.2f\n", extra, fine);

        printf("Enter membership code for waiver (or any text to skip): ");
        scanf("%s", code);
        if (strcmp(code, "LIB2026") == 0)
        {
            payable = fine / 2;
            printf("Code correct! 50%% waiver applied. Fine payable = Rs. %.2f\n", payable);
        }
        else
        {
            payable = fine;
            printf("Wrong code. No waiver. Fine payable = Rs. %.2f\n", payable);
        }
    }
    else
    {
        printf("Book returned on time. No fine.\n");
    }

    *totalFine = *totalFine + fine;

    for (i = pos; i < *borrowedCount - 1; i++)
    {
        borrowedBookIDs[i] = borrowedBookIDs[i + 1];
    }
    (*borrowedCount)--;

    return payable;
}

void displayMemberRecord(char name[], int studentID, int memberType, int borrowedBookIDs[],
                         int borrowedCount, float totalFine, float fineAfterWaiver)
{
    int i;
    printf("\n===== MEMBER RECORD =====\n");
    printf("Name: %s\n", name);
    printf("Student ID: %d\n", studentID);
    if (memberType == 1)
        printf("Membership type: Student\n");
    else
        printf("Membership type: Faculty\n");

    printf("Currently borrowed books: ");
    if (borrowedCount == 0)
        printf("None");
    for (i = 0; i < borrowedCount; i++)
        printf("%d ", borrowedBookIDs[i]);
    printf("\n");

    printf("Total fine before waiver: Rs. %.2f\n", totalFine);
    printf("Final fine payable after waiver: Rs. %.2f\n", fineAfterWaiver);
}

int main()
{
    int bookIDs[4] = {101, 102, 103, 104};
    char bookTitles[4][50];
    int availableCopies[4] = {5, 3, 0, 4};
    int totalBooks = 4;

    char name[50] = "";
    int studentID = 0;
    int memberType = 0;
    int borrowedBookIDs[3];
    int borrowedCount = 0;
    float totalFine = 0, fineAfterWaiver = 0;

    int choice;

    strcpy(bookTitles[0], "Programming in C");
    strcpy(bookTitles[1], "Data Structures");
    strcpy(bookTitles[2], "Database Systems");
    strcpy(bookTitles[3], "Computer Networks");

    do
    {
        displayMenu();
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            registerMember(name, &studentID, &memberType);
            break;

        case 2:
            displayBooks(bookIDs, bookTitles, availableCopies, totalBooks);
            break;

        case 3:
            if (memberType == 0)
                printf("Please register first (option 1).\n");
            else
                borrowBook(bookIDs, bookTitles, availableCopies, totalBooks,
                           borrowedBookIDs, &borrowedCount, memberType);
            break;

        case 4:
            if (memberType == 0)
                printf("Please register first (option 1).\n");
            else
                fineAfterWaiver = fineAfterWaiver +
                                  returnBook(bookIDs, availableCopies, totalBooks, borrowedBookIDs,
                                             &borrowedCount, memberType, &totalFine);
            break;

        case 5:
            if (memberType == 0)
                printf("Please register first (option 1).\n");
            else
                displayMemberRecord(name, studentID, memberType, borrowedBookIDs,
                                    borrowedCount, totalFine, fineAfterWaiver);
            break;

        case 6:
            printf("Thank you! Goodbye.\n");
            break;

        default:
            printf("Invalid choice! Please enter 1-6.\n");
        }
    } while (choice != 6);

    return 0;
}