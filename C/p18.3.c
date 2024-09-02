// Pattern
// A
// B C
// D E F
// G H I J
// K L M N O

#include <stdio.h>

int main()
{
    int a = 'A';

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j <= i)
            {
                printf("%c ", a);
                a++;
            }
        }
        printf("\n");
    }

    return 0;
}