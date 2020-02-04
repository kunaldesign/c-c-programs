#include<stdio.h>
void main(){
    int n,r,temp=0,org;
    printf("enter a number: ");
    scanf("%d",&n);
    org=n;
    while (n>0)
    {
        r=n%10;
        temp=(temp*10)+r;
        n/=10;
    }
    if(org==temp)
    {
        printf("%d is a palindrome number.",org);
    }
    else
    {
        printf("%d is not a palindrone number.",org);
    }
    
}