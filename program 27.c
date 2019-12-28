// program of multiplication table up to a range (entered by the user)
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,range;
    printf("enter an integer: ");
    scanf("%d",&n);
    printf("enter the range: ");
    scanf("%d",&range);
    for(i=1;i<=range;++i)
    {
        printf("%d * %d = %d \n",n,i,n*i);
    }
    getch();
}
