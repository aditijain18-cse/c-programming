#include <stdio.h>

int main()
{
    int n, original, temp, digit;
    int i, factorial, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    temp = n;

    while (temp != 0)
    {
        digit = temp % 10;
        factorial = 1;

        for (i = 1; i <= digit; i++)
        {
            factorial = factorial * i;
        }

        sum = sum + factorial;
        temp = temp / 10;
    }

    if (sum == original)
    {
        printf("%d is a strong number.\n", original);
    }
    else
    {
        printf("%d is not a strong number.\n", original);
    }

    return 0;
}