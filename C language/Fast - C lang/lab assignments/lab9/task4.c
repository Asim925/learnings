#include <stdio.h>
#include <string.h>
int main()
{
    char rooms[5][10] = {"R101", "R102", "R103", "R104", "R105"};
    char guests[5][50] = {"", "", "", "", ""};
    int choice;
    char roomInput[10];
    char guestName[50];

    printf("1. Book room  2. Check out  3. Show rooms  4. Exit\n");
    while (1)
    {
        printf("Choice: ");
        if (scanf("%d", &choice) != 1)
        {
            break;
        }
        getchar();

        if (choice == 1)
        {
            printf("Enter room number: ");
            fgets(roomInput, sizeof(roomInput), stdin);
            roomInput[strcspn(roomInput, "\n")] = '\0';

            int index = -1;
            for (int i = 0; i < 5; i++)
            {
                if (strcmp(rooms[i], roomInput) == 0)
                {
                    index = i;
                    break;
                }
            }

            if (index == -1)
            {
                printf("Error: room not found.\n");
            }
            else if (guests[index][0] != '\0')
            {
                printf("Error: %s is already occupied.\n", rooms[index]);
            }
            else
            {
                printf("Enter guest name: ");
                fgets(guestName, sizeof(guestName), stdin);
                guestName[strcspn(guestName, "\n")] = '\0';

                strcpy(guests[index], guestName);
                printf("Room %s booked for %s.\n", rooms[index], guests[index]);
            }
        }
        else if (choice == 2)
        {
            printf("Enter room number: ");
            fgets(roomInput, sizeof(roomInput), stdin);
            roomInput[strcspn(roomInput, "\n")] = '\0';

            int index = -1;
            for (int i = 0; i < 5; i++)
            {
                if (strcmp(rooms[i], roomInput) == 0)
                {
                    index = i;
                    break;
                }
            }

            if (index == -1)
            {
                printf("Error: room not found.\n");
            }
            else if (guests[index][0] == '\0')
            {
                printf("Error: %s is already empty.\n", rooms[index]);
            }
            else
            {
                printf("%s checked out of %s.\n", guests[index], rooms[index]);
                guests[index][0] = '\0';
            }
        }
        else if (choice == 3)
        {
            for (int i = 0; i < 5; i++)
            {
                if (guests[i][0] == '\0')
                {
                    printf("%s - Empty\n", rooms[i]);
                }
                else
                {
                    printf("%s - %s\n", rooms[i], guests[i]);
                }
            }
        }
        else if (choice == 4)
        {
            break;
        }
    }

    return 0;
}