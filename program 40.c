//program to print reverse of a number
#include<stdio.h>
#include<conio.h>
void main()
{
    int num,temp,rem,rev=0;
    printf("enter an integer: \n");
    scanf("%d",&num);
    //original number is stored at temp
    temp=num;
    while(num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    printf("given number is= %d \n",temp);
    printf("its reverse is= %d \n",rev);
    getch();
}
