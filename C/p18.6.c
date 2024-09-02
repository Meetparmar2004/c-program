// Pattern
//  *
//  *  *
//  *  *  *
//  *  *
//  *

#include <stdio.h>

int main()
{
    int c, k;

    printf("Enter number of column :- ");
    scanf("%d", &c);

    for (int i = 1; i <= c; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (i >= j)
            {
                printf(" * ");
            }
        }

        printf("\n");
    }

    for (int i = c - 1; i >= 1; i--)
    {
        for (int j = 1; j <= c; j++)
        {
            if (i >= j)
            {
                printf(" * ");
            }
        }

        printf("\n");
    }

    return 0;
}