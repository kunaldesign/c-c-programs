// program to check odd or even using conditional operator
#include<stdio.h>
#include<conio.h>
void main()
{
    int number;
    printf("enter an integer: ");
    scanf("%d",&number);
    (number % 2 == 0) ? printf("%d is even.",number) : printf("%d is odd.",number);
    getch();
}
