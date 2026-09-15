#include <stdio.h>

int main()
{
    int choice;
    float a, b;
    int x, y;

    printf("----- CALCULATOR -----\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Modulus (%%)\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Result = %.2f", a + b);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Result = %.2f", a - b);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Result = %.2f", a * b);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);

            if (b == 0)
                printf("Division by zero is not allowed");
            else
                printf("Result = %.2f", a / b);

            break;

        case 5:
            printf("Enter two integers: ");
            scanf("%d %d", &x, &y);

            if (y == 0)
                printf("Modulus by zero is not allowed");
            else
                printf("Result = %d", x % y);

            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}