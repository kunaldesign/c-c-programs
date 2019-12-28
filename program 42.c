//program to check armstrong number of n digits
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int number,originalnumber,remainder,result=0,n=0;
    printf("enter an integer: ");
    scanf("%d",&number);
    originalnumber=number;
    while(originalnumber!=0)
    {
        originalnumber/=10;
        ++n;
    }
    originalnumber=number;
    while(originalnumber!=0)
    {
        remainder=originalnumber%10;
        result+=pow(remainder,n);
        originalnumber/=10;
    }
    if(result==number)
        printf("%d is an armstrong number.",number);
    else
        printf("%d is not an armstrong number.",number);
    getch();
}
