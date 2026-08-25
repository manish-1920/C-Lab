#include <stdio.h>

int main()
{
    int marks = 85;
    const int passingMarks = 40;

    if (marks >= passingMarks)
    {
        printf("Student has passed.\n");
    }
    else
    {
        printf("Student has failed.\n");
    }

    return 0;
}