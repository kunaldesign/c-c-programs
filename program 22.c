// program to sum of natural number using for loop
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,sum=0;
    printf("enter a positive integer: ");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        sum +=i;  // sum = sum+i;
    }
    printf("sum = %d",sum);
    getch();
}
