//program of gcd for both positive and negative numbers
#include<stdio.h>
#include<conio.h>
void main()
{
    int n1,n2;
    printf("enter two integers: ");
    scanf("%d %d",&n1,&n2);
    //if user enters negative number,sign of the number is changed to positive
    n1=(n1>0)?n1:-n1;
    n2=(n2>0)?n2:-n2;
    while(n1!=n2)
    {
        if(n1>n2)
            n1-=n2;
        else
            n2-=n1;
    }
    printf("gcd = %d",n1);
    getch();

}
