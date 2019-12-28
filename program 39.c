//program to find prime number or not
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int num,j,flag;
    printf("enter a number: \n");
    scanf("%d",&num);
    if(num<=1)
    {
        printf("%d is not a prime number \n",num);
        exit(1);
    }
    flag=0;
    for(j=2;j<=num/2;j++)
    {
        if((num%j)==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("%d is a prime number \n",num);
    else
        printf("%d is not a prime number \n",num);
    getch();
}
