#include<stdio.h>
int main(){
    char operator;
    int first,secound;
    printf("enter an operator(+,-,*,/): ");
    scanf("%c",&operator);
    printf("enter two operands: ");
    scanf("%d %d",&first,&secound);
    switch(operator)
    {
    case '+':
        printf("%d + %d = %d", first,secound,first+secound);
        break;
    case '-':
        printf("%d - %d = %d", first,secound,first-secound);
        break;
    case '*':
        printf("%d * %d = %d", first,secound,first*secound);
        break;
    case '/':
        printf("%d / %d = %d", first,secound,first+secound);
        break;
    default:
        printf("error");
        break;
    }
    return 0;
}