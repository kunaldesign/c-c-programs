// program to find factorial of a number
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i;
    unsigned long long factorial=1;
    printf("enter an integer: ");
    scanf("%d",&n);
    // show error if the user enters a negative integer
    if (n < 0)
        printf("Error! factorial of a negative number doesn't exist.");
    else
    {
        for(i=1;i<=n;++i)
        {
            factorial *= i;     //factorial = factorial*i;
        }
        printf("factorial of %d = %llu",n,factorial);
    }
    getch();
}
