#include <stdio.h>
int main() {
    int a, b, swapped;

    scanf("%d %d", &a, &b);

    swapped = a;
    a=b;
    b = swapped;

    printf("after swap: %d %d", a, b);

    return 0;
}