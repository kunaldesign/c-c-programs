//program of gcd using while loop and if...else statement
#include<stdio.h>
#include<conio.h>
void main()
{
    int n1, n2;
    printf("enter two positive integers: ");
    scanf("%d %d",&n1,&n2);
    while (n1!=n2)
    {
        if(n1>n2)
            n1-=n2;
        else
            n2-=n1;
    }
    printf("GCD= %d",n1);
    getch();
}