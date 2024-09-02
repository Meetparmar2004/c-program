#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter value of A and B :- ");
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        printf("Sum: A + B = %d", a + b);
    }
    else
    {
        printf("Sub: A - B = %d", a - b);
    }

    return 0;
}