#include <stdio.h>

int main() {
    int radius, area, circumference;

    printf("Enter radius:");
    scanf("%d", &radius);

    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;

    printf("Area: %d\n", area);
    printf("Circumference: %d\n", circumference);

    return 0;
}