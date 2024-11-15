// I am Vedant Sahu, owner of this program, got it?
#include <stdio.h>

int main()
{

    int i, j, k, n;

    printf("Enter the number of lines you want to print : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
    {
        for (k = (i - 1); k != 0; k--)
        {
            printf(" ");
        }
        for (j = i; j <= n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

// © all rights reserved 2024