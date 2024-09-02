// WAP to take two Array input from user and sort them in ascending or descending order as per user's choice

#include <stdio.h>

int main()
{
    int n, s;

    printf("Enter number of elements :- ");
    scanf("%d", &n);

    int a[n], b[n];

    printf("Enter value of A:- ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter value of B:- ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    printf("For Ascending order type: 1\nFor Decending order type: 2\n");
    scanf("%d", &s);

    if (s == 1)
    {
        // Ascending order
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i] > a[j])
                {
                    // printf("p  %d :::: %d \n",a[i],a[j]);
                    a[i] = a[i] + a[j];
                    // printf("%d  ",a[i]);
                    a[j] = a[i] - a[j];
                    // printf("%d  ",a[j]);
                    a[i] = a[i] - a[j];
                    // printf("%d  ",a[i]);
                    // printf("s  %d :::: %d \n",a[i],a[j]);
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (b[i] > b[j])
                {
                    b[i] = b[i] + b[j];
                    b[j] = b[i] - b[j];
                    b[i] = b[i] - b[j];
                }
            }
        }
        printf("After sort A : ");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
        printf("After sort B : ");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", b[i]);
        }
    }
    else if (s == 2)
    {
        // Decending order
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i] < a[j])
                {
                    a[i] = a[i] + a[j];
                    a[j] = a[i] - a[j];
                    a[i] = a[i] - a[j];
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (b[i] < b[j])
                {
                    b[i] = b[i] + b[j];
                    b[j] = b[i] - b[j];
                    b[i] = b[i] - b[j];
                }
            }
        }

        printf("After sort A : ");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
        printf("After sort B : ");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", b[i]);
        }
    }
    else
    {
        printf("Invalid Input");
    }

    return 0;
}