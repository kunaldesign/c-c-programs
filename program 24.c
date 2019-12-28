// program to read input until user enters a positive integer
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,sum=0;
    do {
        printf("enter a positive integer: ");
        scanf("%d",&n);
    }
    while (n <= 0);
    for(i=1;i <= n; ++i)
    {
        sum += i;  //sum = sum + i;
    }
    printf("sum = %d",sum);
    getch();
}
