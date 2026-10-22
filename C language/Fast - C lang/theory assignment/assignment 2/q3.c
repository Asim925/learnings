#include <stdio.h>
void takeInput(int sensors, int readings, int temp[sensors][readings])
{
    for (int i = 0; i < sensors; i++)
    {
        printf("Sensor %d: ", i + 1);
        for (int j = 0; j < readings; j++)
            scanf("%d", &temp[i][j]);
    }
    printf("\n");
}
int main()
{
    int sensors;
    printf("enter the no. of sensors: ");
    scanf("%d", &sensors);
    int readings;
    printf("enter the no. of sensors: ");
    scanf("%d", &readings);

    int temp[sensors][readings];
    takeInput(sensors, readings, temp);

    float maxAvg = 0.0;
    int maxSensor = 0;
    for (int i = 0; i < sensors; i++)
    {
        int total = 0, max = temp[i][0], min = temp[i][0];
        int critical = 0, warning = 0;
        int streak = 0;
        int longestStreak = 0;

        for (int j = 0; j < readings; j++)
        {
            int element = temp[i][j];
            total += element;
            if (max < element)
                max = element;
            if (min > element)
                min = element;

            if (element >= 35)
                streak++;
            else
                streak = 0;
            if (longestStreak < streak)
                longestStreak = streak;

            if (element >= 40)
                critical++;
            else if (element >= 35)
                warning++;
        }
        float avg = total / (float)readings;

        if (maxAvg < avg)
        {
            maxAvg = avg;
            maxSensor = i + 1;
        }
        printf("Sensor %d: Total = %d  Average = %.2f   Max = %d  Min = %d\n", i + 1, total, avg, max, min);
        printf("\t Critical = %d  Warning = %d  Longest hot streak= %d\n\n", critical, warning, longestStreak);
    }

    printf("Highest average: Sensor %d (%.2f)", maxSensor, maxAvg);
    return 0;
}