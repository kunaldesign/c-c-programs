// program to check if a number is positive or negative using nested if...else
#include<stdio.h>
#include<conio.h>
void main()
{
    double number;
    printf("enter a number: ");
    scanf("%lf",&number);
    // true if number is less than 0
    if (number < 0.0)
        printf("you entered a negative number.");
    // true if number is greater than 0
    else if (number > 0.0)
        printf("you entered a positive number.");
    // if both test expression is evaluate to false
    else
        printf("you entered 0.");
    getch();
}
