// I am Vedant Sahu, owner of this program, got it?

// <<<<<------------------------ PYRAMIDICAL STAR PATTERN ------------------------------>>>>>

#include <stdio.h>

int main()
{

    int c, i, k, n;

    printf("Enter the no. of lines you want to print : ");
    scanf("%d", &n);
    c = n;

    for (; n > 0; n--)
    {
        for (i = 1; i < n; i++)
        {
            printf(" ");
        }
        k = (1 + c) - n;
        while (k)
        {
            printf("* ");
            k--;
        }
        printf("\n");
    }

    return 0;
}

// © all rights reserved 2024