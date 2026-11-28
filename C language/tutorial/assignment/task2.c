#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Error: Please provide the input filename.\n");
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (file == NULL)
    {
        printf("Error: Could not open file.\n");
        return 1;
    }

    int N, G;
    fscanf(file, "%d", &N);
    fscanf(file, "%d", &G);

    int **curr_grid = (int **)malloc(N * sizeof(int *));
    int **next_grid = (int **)malloc(N * sizeof(int *));

    for (int i = 0; i < N; i++)
    {
        curr_grid[i] = (int *)malloc(N * sizeof(int));
        next_grid[i] = (int *)malloc(N * sizeof(int));
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            fscanf(file, "%d", &curr_grid[i][j]);
        }
    }

    fclose(file);

    for (int gen = 0; gen < G; gen++)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                int live_neighbors = 0;

                for (int r = -1; r <= 1; r++)
                {
                    for (int c = -1; c <= 1; c++)
                    {
                        if (r == 0 && c == 0)
                        {
                            continue;
                        }

                        int nr = i + r;
                        int nc = j + c;

                        if (nr >= 0 && nr < N && nc >= 0 && nc < N)
                        {
                            if (curr_grid[nr][nc] == 1)
                            {
                                live_neighbors++;
                            }
                        }
                    }
                }

                if (curr_grid[i][j] == 1)
                {
                    if (live_neighbors < 2 || live_neighbors > 3)
                    {
                        next_grid[i][j] = 0;
                    }
                    else
                    {
                        next_grid[i][j] = 1;
                    }
                }
                else
                {
                    if (live_neighbors == 3)
                    {
                        next_grid[i][j] = 1;
                    }
                    else
                    {
                        next_grid[i][j] = 0;
                    }
                }
            }
        }

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                curr_grid[i][j] = next_grid[i][j];
            }
        }
    }

    printf("Final Grid after %d generations:\n", G);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", curr_grid[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < N; i++)
    {
        free(curr_grid[i]);
        free(next_grid[i]);
    }
    free(curr_grid);
    free(next_grid);

    return 0;
}