// I am Vedant Sahu, owner of this program, got it?
#include <stdio.h>

int main()
{

    int i, j, k, n;

    printf("Enter the no. of lines you want to print : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = i; j < n; j++)
        {
            printf(" ");
        }
        for (k = i; k > 0; k--)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

// © all rights reserved 2024