// program to check if a number is positive or negative using if...else
#include<stdio.h>
#include<conio.h>
void main()
{
    double number;
    printf("enter a number: ");
    scanf("%lf",&number);
    if (number <= 0.0)
    {
        if (number == 0.0)
            printf("you entered 0.");
        else
            printf("you entered a - negative number.");
    }
    else
        printf("you entered a + positive number.");
    getch();
}
