#include<stdio.h>
void main(){
    int num,org,rem,result=0;
    printf("enter a three-digit number: ");
    scanf("%d",&num);
    org=num;
    while(org!=0){
        rem=org%10;
        result+=rem*rem*rem;
        org/=10;
    }
    if (result==num)
    {
        printf("%d is an armstrong number.",num);
    }
    else
    {
        printf("%d is not an armstrong number.",num);
    }
    
}