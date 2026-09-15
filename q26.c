#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("Invalid input");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            printf("%d ", i);
        }
    }

    return 0;
}