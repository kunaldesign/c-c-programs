// program to check even or odd
#include<stdio.h>
#include<conio.h>
void main()
{
    int number;
    printf("enter an integer: ");
    scanf("%d",&number);
    // true if the number is perfectly divisible by 2
    if(number % 2 == 0)
        printf("%d is even.",number);
    else
        printf("%d is odd.",number);
    getch();
}
