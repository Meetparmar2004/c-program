// Pattern
// A
// A B
// A B C
// A B C D
// A B C D E

#include <stdio.h>

int main()
{
    int a;
    for (int i = 0; i < 5; i++)
    {
        a = 'A';
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