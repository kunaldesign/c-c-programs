#include<stdio.h>

//function to return the reverse of a number
int reverse(int n){
    int rev=0;
    while (n!=0)
    {
        rev=(rev*10)+(n%10);
        n/=10;
    }
    return rev;
}

//function to find the sum of the odd and even positioned digits in a number.
void getSum(int n){
    n=reverse(n);
    int sumOdd=0,sumEven=0,c=1;
    while (n!=0)
    {
        /*if c is even number then it means digit extracted is at even place*/
        if (c%2==0)
        {
            sumEven+=n%10;
        }
        else
        {
            sumOdd+=n%10;
        }
        n/=10;
        c++;
    }
    printf("Sum odd = %d \n",sumOdd);
    printf("Sum even= %d \n",sumEven);
}

// Driver code
int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    getSum(n);
    return 0;
}