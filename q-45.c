#include <stdio.h>

int main()
{
    int n, i;
    double sum = 0.0;
    double numerator, denominator;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        numerator = 2 * i;
        denominator = 4 * i - 1;

        sum = sum + numerator / denominator;
    }

    printf("Sum of the series = %.2lf\n", sum);

    return 0;
}