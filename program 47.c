//insert  number & print on a screen
#include<stdio.h>
#include<conio.h>
void main()
{
    int arry[5],i;
    for(i=0;i<5;i++)
    {
        printf("Enter a[%d]: ",i);
        scanf("%d",&arry[i]);
    }
    printf("\nPrinting element of the array: \n\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",arry[i]);
    }
    //signal to operation system program ran fine
    getch();
}
