// Pattern
// 1
// 1 0
// 1 0 1
// 1 0 1 0
// 1 0 1 0 1

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j <= i)
            {
                if (j % 2 == 0)
                {
                    printf("0 ");
                }
                else
                {
                    printf("1 ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}