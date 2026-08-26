#include <stdio.h>

int main()
{
    int a = 5;

    printf("Initial value of a = %d\n", a);

    printf("\nPre-increment (++a):\n");
    printf("Value = %d\n", ++a);

    printf("\nPost-increment (a++):\n");
    printf("Value = %d\n", a++);
    printf("After operation a = %d\n", a);

    printf("\nPre-decrement (--a):\n");
    printf("Value = %d\n", --a);

    printf("\nPost-decrement (a--):\n");
    printf("Value = %d\n", a--);
    printf("After operation a = %d\n", a);

    return 0;
}