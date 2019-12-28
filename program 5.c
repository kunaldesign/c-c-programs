// program to print ASCII value
#include<stdio.h>
#include<conio.h>
void main()
{
    char c;
    printf("enter a character: ");
    // read character input from the user
    scanf("%c",&c);
    // %d displays the integer value of a character
    // %c displays the actual character
    printf("ASCII value of %c = %d",c,c);
    getch();
}
