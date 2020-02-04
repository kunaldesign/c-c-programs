#include<stdio.h>
void main()
{
    int n,i=2,temp=0;
    printf("enter a positive integer: ");
    scanf("%d",&n);
    while(i <= n/2)
    {
        //condition for non-prime
        if (n%i==0)
        {
            temp=1;
            break;
        }
        
    }
    if (n==1)
    {
        printf("1 is a neither prime nor composite.");
    }
    else
    {
        if (temp==0)
        {
            printf("%d is a prime number.",n);
        }
        else
        {
            printf("%d is not a prime number.",n);
        }
        
    }  
}