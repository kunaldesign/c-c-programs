// program to swap numbers using temporary variable
#include<stdio.h>
#include<conio.h>
void main()
{
    double firstNumber,secondNumber,temporaryVariable;
    printf("enter first number: ");
    scanf("%lf",&firstNumber);
    printf("enter second number: ");
    scanf("%lf",&secondNumber);
    // value of firstNumber is assigned to temporaryVariable
    temporaryVariable=firstNumber;
    // value of secondNumber is assigned to firstNumber
    firstNumber=secondNumber;
    // value of temporaryVariable (which contains the initial value of firstNumber) is assigned to secondNumber
    secondNumber=temporaryVariable;
    printf("\nafter swapping, firstNumber = %.2lf\n",firstNumber);
    printf("after swapping, secondNumber = %.2lf \n",secondNumber);
    getch();

}
