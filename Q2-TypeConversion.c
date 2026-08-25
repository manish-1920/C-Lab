#include <stdio.h>

int main()
{
    int a;
    float b;

    printf("Enter an integer: ");
    scanf("%d", &a);

    printf("Enter a floating-point number: ");
    scanf("%f", &b);

    // Implicit type conversion
    float implicitResult = a + b;

    // Explicit type conversion
    float explicitResult = (float)a + b;

    printf("\nImplicit Type Conversion:\n");
    printf("%d + %.2f = %.2f\n", a, b, implicitResult);

    printf("\nExplicit Type Conversion:\n");
    printf("(float)%d + %.2f = %.2f\n", a, b, explicitResult);

    return 0;
}