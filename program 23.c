// program to sum of natural numbers using while loop
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,sum=0;
    printf("enter a positive integer: ");
    scanf("%d",&n);
    i=1;
    while (i <= n)
    {
        sum += i;
        ++i;
    }
    printf("sum = %d",sum);
    getch();
}
