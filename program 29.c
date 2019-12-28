// program of fibonacci sequence up to a certain number
#include<stdio.h>
#include<conio.h>
void main()
{
    int t1=0, t2=1, nextTerm=0,n;
    printf("enter a positive number: ");
    scanf("%d",&n);
    // dis the first two terms which is always0 and 1
    printf("fibonacci series: %d, %d, ",t1,t2);
    nextTerm=t1+t2;
    while(nextTerm <= n)
    {
        printf("%d, ",nextTerm);
        t1=t2;
        t2=nextTerm;
        nextTerm=t1+t2;
    }
    getch();
}
