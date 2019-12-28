//insert number & print there multiplation on the screen
#include<stdio.h>
#include<conio.h>
void main()
{
   int arry[5],i,s=1;
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
    for(i=0;i<5;i++)
    {
        s*=arry[i];
    }
    printf("\n\nThe sum of the printed number is %d",s);
      //signal to operation system program ran fine
    getch();
}

