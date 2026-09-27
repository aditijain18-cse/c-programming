#include <stdio.h>

int main()
{
    int i, j;
    int rows = 4;

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n\n");
    }

    for (i = rows - 1; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n\n");
    }

    return 0;
}