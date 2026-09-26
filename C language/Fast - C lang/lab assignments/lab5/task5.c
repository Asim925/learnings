#include <stdio.h>
int main()
{
    float side1 = 0, side2 = 0, side3 = 0;
    printf("enter space seperated sides legnth of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);
    if (side1 + side3 > side2 && side2 + side3 > side1 && side1 + side2 > side3)
    {
        if (side1 == side2 || side2 == side3 || side1 == side3)
        {
            if ((side1 == side2 && side2 == side3) || (side1 == side3 && side2 == side3) || (side1 == side2 && side2 == side3))
                printf("its equilateral triagnle");
            else
                printf("its isoceles triagnle");
        }
        else
            printf("its scalene triagnle");
    }
    else
        printf("not a valid triangle");

    return 0;
}