// program using nested if...else statement to find the largest number
#include<stdio.h>
#include<conio.h>
void main()
{
    double n1,n2,n3;
    printf("enter three numbers: ");
    scanf("%lf %lf %lf",&n1,&n2,&n3);
    if(n1>=n2)
    {
        if(n1>=n3)
            printf("%.2lf is the largest.",n1);
        else
            printf("%.2lf is the largest.",n3);
    }
    else
    {
        if(n2>=n3)
            printf("%.2lf is the largest.",n2);
        else
            printf("%.2lf is the largest.",n3);
    }
    getch();
}
