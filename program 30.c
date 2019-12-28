// program of GCD using for loop and if statement
#include<stdio.h>
#include<conio.h>
void main()
{
    int n1, n2 , i, gcd;
    printf("enter two integers: ");
    scanf("%d %d",&n1,&n2);
    for(i=1;i<=n1 && i<=n2;++i)
    {
        // check i if is factor of both integers
        if (n1%i==0 && n2%i==0)
        gcd=i;
    }
    printf("G.C.D of %d and %d is %d",n1,n2,gcd);
    getch();
}
