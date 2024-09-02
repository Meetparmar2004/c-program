// WAP to convert years into days and days into years

#include <stdio.h>

int main()
{
    int days, years;
    int Y, D;

    // Days into Years
    printf("Enter Days to convert into Year:- ");
    scanf("%d", &days);

    Y = days / 365;
    printf("Converted Days into Years = %d", Y);

    // Years into Days
    printf("\n\nEnter Years to convert into Days:- ");
    scanf("%d", &years);

    D = years * 365;
    printf("Converted Years into Days = %d", D);

    return 0;
}