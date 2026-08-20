#include <stdio.h>

int main() {
    int num1, num2, perimeter, area;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    perimeter = 2 * (num1 + num2);
    area = num1 * num2;

    printf("Perimeter: %d\n", perimeter);
    printf("Area: %d\n", area);

    return 0;
}