/**
* C program to check wherther a number is strong number or not 
**/

#include<stdio.h>

int main(){
    int i,originalNum,num,lastDigit,sum;
    long fact;

    /* input a number from user */
    printf("enter the number: ");
    scanf("%d",&num);

    /* Copy the values of num to a temporary variable */
    originalNum= num;

    sum=0;

    /* find sum of factorial of digits */
    while(num){

        /* Get last digit of num */
        lastDigit=num%10;

        /* Find factorial of digits */
        fact=1;
        for ( i = 1; i <= lastDigit; i++)
        {
            fact=fact*i;
        }

        /* Add factorial to sum */
        sum=sum+fact;

        num=num/10;
    }

    /* Check stronge number condition*/
    if (sum==originalNum)
    {
        printf("%d is stronge number.",originalNum);
    }
    else
    {
        printf("%d is not stronge number.",originalNum);
    }
    return 0;
}