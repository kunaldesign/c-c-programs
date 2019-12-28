// program to swap number without using temporary variables
#include<stdio.h>
#include<conio.h>
void main()
{
    double firstNumber,secondNumber;
    printf("enter first number: ");
    scanf("%lf",&firstNumber);
    printf("enter second number: ");
    scanf("%lf",&secondNumber);
    // swapping process
    firstNumber=firstNumber-secondNumber;
    secondNumber=firstNumber+secondNumber;
    firstNumber=secondNumber-firstNumber;
    printf("\nafter swapping, firstNumber = %.2lf\n",firstNumber);
    printf("after swapping, secondNumber = %.2lf \n",secondNumber);
    getch();

}
