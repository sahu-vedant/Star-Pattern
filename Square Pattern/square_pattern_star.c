// I am Vedant Sahu, owner of this program, got it? only me... 20th November 2024

// <<<<<<---------------------------------- SQUARE PATTERN USING STARS ------------------------------->>>>>>

#include <stdio.h>

int main()
{

    int i, n;

    printf("Enter the number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("* ");
    }
    printf("\n");

    for (int j = 1; j <= n - 2; j++)
    {
        printf("* ");
        for (i = 1; i <= n - 2; i++)
        {
            printf("  ");
        }
        printf("*");
        printf("\n");
    }

    if (n != 1)
    {
        for (i = 1; i <= n; i++)
        {
            printf("* ");
        }
    }
    else
    {
        // nothing
    }

    return 0;
}

// © all rights reserved 2024