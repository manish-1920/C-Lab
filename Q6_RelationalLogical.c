#include <stdio.h>

int main()
{
    float sub1, sub2, sub3;
    float average;

    printf("Enter marks for Subject 1: ");
    scanf("%f", &sub1);

    printf("Enter marks for Subject 2: ");
    scanf("%f", &sub2);

    printf("Enter marks for Subject 3: ");
    scanf("%f", &sub3);

    average = (sub1 + sub2 + sub3) / 3;

    printf("\nAverage = %.2f\n", average);

    if (sub1 >= 40 && sub2 >= 40 && sub3 >= 40)
    {
        printf("Student passed all subjects.\n");
    }
    else
    {
        printf("Student failed in one or more subjects.\n");
    }

    if (average >= 75)
    {
        printf("Student scored distinction.\n");
    }
    else
    {
        printf("Student did not score distinction.\n");
    }

    return 0;
}