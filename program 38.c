//program to convert lower case to upper case
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str[20];
    int i;
    printf("enter first name: ");
    scanf("%s",str);
    for(i=0;i<=strlen(str);i++)
    {
        if(str[i]>=97 && str[i]<=122)
        {
            str[i]=str[i]-32;
        }
    }
    printf("\n the string in uppercase= %s",str);
    getch();
}
