#include <stdio.h>

int globalVar = 10;

int main()
{
    int localVar = 20;
    static int staticVar = 30;

    printf("Inside main():\n");
    printf("Global variable = %d\n", globalVar);
    printf("Local variable = %d\n", localVar);
    printf("Static variable = %d\n", staticVar);

    {
        int blockVar = 40;

        globalVar++;
        localVar++;
        staticVar++;
        blockVar++;

        printf("\nInside block:\n");
        printf("Global variable = %d\n", globalVar);
        printf("Local variable = %d\n", localVar);
        printf("Static variable = %d\n", staticVar);
        printf("Block variable = %d\n", blockVar);
    }

    printf("\nAfter block:\n");
    printf("Global variable = %d\n", globalVar);
    printf("Local variable = %d\n", localVar);
    printf("Static variable = %d\n", staticVar);

    return 0;
}