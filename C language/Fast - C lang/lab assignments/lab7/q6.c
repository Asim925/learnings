#include <stdio.h>

int main()
{
    char board[3][3];
    int i, j, win = 0;
    char winner = '-';

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("enter cell %d %d (x, o, -): ", i + 1, j + 1);
            scanf(" %c", &board[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        if (board[i][0] != '-' &&
            board[i][0] == board[i][1] &&
            board[i][1] == board[i][2])
        {
            winner = board[i][0];
            win = 1;
        }

        if (board[0][i] != '-' &&
            board[0][i] == board[1][i] &&
            board[1][i] == board[2][i])
        {
            winner = board[0][i];
            win = 1;
        }
    }

    if (board[0][0] != '-' &&
        board[0][0] == board[1][1] &&
        board[1][1] == board[2][2])
    {
        winner = board[0][0];
        win = 1;
    }

    if (board[0][2] != '-' &&
        board[0][2] == board[1][1] &&
        board[1][1] == board[2][0])
    {
        winner = board[0][2];
        win = 1;
    }

    if (win)
    {
        printf("winner: %c\n", winner);
    }
    else
    {
        printf("draw\n");
    }

    return 0;
}