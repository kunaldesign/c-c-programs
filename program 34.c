// program to check alphabet,digit or special character
#include<stdio.h>
#include<conio.h>
void main()
{
    char c;
    // input character from user
    printf("enter any character: ");
    scanf("%c",&c);
    // alphabet check
    if((c>='a' && c<='z')||(c>='A' && c<='Z'))
    {
        printf("%c is alphabet.",c);
    }
    // digit check
    else if(c>='0' && c<='9')
    {
        printf("%c is digit.",c);
    }
    else
    {
        printf("%c is special character.",c);
    }
    getch();
}
