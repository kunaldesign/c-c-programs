// program to find roots of a quadratic equation
#include<stdio.h>
#include<conio.h>
void main()
{
    double a,b,c,determinant,root1,root2,realPart,imaginaryPart;
    printf("enter coefficients a, b and c: ");
    scanf("%lf %lf %lf",&a,&b,&c);
    determinant = b*b-4*a*c;
    // condition for real and different roots
    if (determinant > 0)
    {
        // sqrt() function returns square root
        root1 = (-b+sqrt(determinant))/(2*a);
        root2 = (-b-sqrt(determinant))/(2*a);
        printf("root1 = %.2lf and root2 = %.2lf",root1,root2);
    }
    // if roots are not real
    else
    {
        realPart = -b/(2*a);
        imaginaryPart = sqrt(-determinant)/(2*a);
        printf("root1 = %.2lf+%.2lf i and root2 = %.2f-%.2f i",realPart,imaginaryPart,realPart,imaginaryPart);
    }
    getch();
}
