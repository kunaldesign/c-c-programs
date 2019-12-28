// program to compute quotient and remainder
#include<stdio.h>
#include<conio.h>
void main()
{
    int dividend,divisor,quotient,remainder;
    printf("enter the dividend: ");
    scanf("%d",&dividend);
    printf("enter divisor: ");
    scanf("%d",&divisor);
    // computes quotient
    quotient=dividend/divisor;
    // computes remainder
    remainder=dividend%divisor;
    printf("quotient = %d \n",quotient);
    printf("remainder = %d",remainder);
    getch();
}
