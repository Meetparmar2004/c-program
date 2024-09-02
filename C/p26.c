// WAP to reverse a string and check that the string is palindrome or not

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the maximum number of characters for the string:- ");
    scanf("%d", &n);

    char a[n];
    int k = 0, i = 0, j;

    printf("Enter String :- ");
    getchar();
    fgets(a, n, stdin);

    while (a[k] != '\0')
    {
        k++;
    }

    char b[k - 1];
    j = k - 1;
    while (a[i] != '\0')
    {
        b[j] = a[i];
        i++;
        j--;
    }

    printf("%s", b);

    return 0;
}