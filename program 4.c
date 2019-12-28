// program to multiply two numbers
#include<stdio.h>
#include<conio.h>
void main()
{
    double firstNumber, secondNumber,product;
    printf("enter two numbers: ");
    // stores two floating point number in variable firstNumber and secondNumber respectively
    scanf("%lf %lf",&firstNumber,&secondNumber);
    //perfroms multiplication and stores the result in variable productOfTwoNumbers
    product=firstNumber*secondNumber;
    // result up to 2 decimal point is displayed using %.2lf
    printf("product = %.2lf",product);
    getch();
}
