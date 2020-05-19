#include<stdio.h>
#include<math.h>
#include<stdlib.h>

const int sz=1e5;

//function for sieve of eratosthenes
void sieve(){
    memset(isPrime,true,sizeof(isPrime));
    isPrime[0]=isPrime[1]= false;

    for (int i = 2; i*i <= sz; i++)
    {
        if (isPrime[i])
        {
            for (int j = i*i; i < sz; i++)
            {
                isPrime[j]= false;
            }
            
        }
        
    }
    
}

// function to print all the prime number with d digits
void findPrimesD(int d){

    // range to check integers
    int left=pow(10,d-1);
    int right=pow(10,d)-1;

    //for every integer in the range
    for (int i=left;i<=right;i++){

        //if the current integer is prime
        if(isPrime[i]){
            printf("%d",i," ");
        }
    }
}

//driver code
int main(){

    //generate primes
    sieve();
    int d;
    printf("enter the number: ");
    scanf("%d",&d);
    findPrimesD(d);

    return 0;
}