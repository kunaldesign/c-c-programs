//program to check whether a number is palindrome or not
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
    if(temp==rev)
        printf("%d is a palindrome.",temp);
    else
        printf("%d is not a palindrome.",temp);
    getch();
}

