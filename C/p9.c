// WAP to find number is even or odd using ternary operator

#include <stdio.h>

int main()
{
    int num;
    char e[] = "even";
    char o[] = "odd";

    printf("Enter a number :- ");
    scanf("%d", &num);

    printf("Given number %d is %s ", num, (num % 2 == 0 ? e : o));
    return 0;
}