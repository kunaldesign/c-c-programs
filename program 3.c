// program to add two integer
#include<stdio.h>
#include<conio.h>
void main()
{
    int firstNumber,secoundNumber,sumOfTwoNumbers;
    printf("enter two integer: ");
    // two integer entered by user is stored using scanf() function
    scanf("%d %d",&firstNumber,&secoundNumber);
    //sum of two number in stored in variable sumOfTwoNumbers
    sumOfTwoNumbers=firstNumber+secoundNumber;
    //displays sum
    printf("%d + %d = %d",firstNumber,secoundNumber,sumOfTwoNumbers);
    getch();
}
