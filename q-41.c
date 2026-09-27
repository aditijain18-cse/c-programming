#include <stdio.h>

int main()
{
    int n, original, last, first;
    int divisor = 1;
    int middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    if (n < 10)
    {
        printf("Number after swapping = %d\n", n);
        return 0;
    }

    last = n % 10;

    while (n >= 10)
    {
        n = n / 10;
        divisor = divisor * 10;
    }

    first = n;

    middle = (original % divisor) / 10;

    result = last * divisor + middle * 10 + first;

    printf("Number after swapping first and last digit = %d\n", result);

    return 0;
}