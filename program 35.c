//program to find greatest among two numbers
#include<stdio.h>
#include<conio.h>
void main()
{
    double n1,n2;
    printf("enter first number: ");
    scanf("%lf",&n1);
    printf("enter secound number: ");
    scanf("%lf",&n2);
    if(n1>n2)
        printf("%lf is greater.",n1);
    else
        printf("%lf is greater.",n2);
    getch();
}
