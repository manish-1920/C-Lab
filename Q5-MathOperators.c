#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("\nArithmetic Operations:\n");

    printf("Addition       = %d\n", a + b);
    printf("Subtraction    = %d\n", a - b);
    printf("Multiplication = %d\n", a * b);

    if (b != 0)
    {
        printf("Division       = %.2f\n", (float)a / b);
        printf("Modulus        = %d\n", a % b);
    }
    else
    {
        printf("Division       = Cannot divide by zero\n");
        printf("Modulus        = Cannot use modulus with zero\n");
    }

    printf("\nMathematical Operations:\n");

    if (a >= 0)
    {
        printf("Power          = %.2f\n", pow(a, b));
        printf("Square root    = %.2f\n", sqrt(a));
    }
    else
    {
        printf("Power          = %.2f\n", pow(a, b));
        printf("Square root    = Not defined for negative number\n");
    }

    printf("Absolute value = %d\n", abs(a));

    if (b != 0)
    {
        printf("Floor value    = %.2f\n", floor((double)a / b));
        printf("Ceiling value  = %.2f\n", ceil((double)a / b));
    }

    return 0;
}