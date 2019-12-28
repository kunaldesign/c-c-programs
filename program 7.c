// program to find the size of a variable
#include<stdio.h>
#include<conio.h>
void main()
{
    int integerType;
    float floatType;
    double doubleType;
    char charType;
    // sizeof operation is used to evaluate the size of a variable
    printf("size of int: %ld bytes \n",sizeof(integerType));
    printf("size of float: %ld bytes \n",sizeof(floatType));
    printf("size of double: %ld bytes \n",sizeof(doubleType));
    printf("size of char: %ld bytes \n",sizeof(charType));
    getch();
}
