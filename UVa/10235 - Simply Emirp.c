#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isPrime(long int num){
    long int i;
    int s = sqrt(num);
    for(i=2; i<=s; i++){
        if(num%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    long int n;
    bool prime, rev_prime;

    while(scanf("%ld", &n) == 1){
        prime = rev_prime = false;
        prime = isPrime(n);

        long int rev = 0, temp;
        temp = n;
        for(; n!=0; n=n/10){
            rev = (rev*10) + (n%10);
        }

        if(temp != rev){
            rev_prime = isPrime(rev);
        }

        if(prime && rev_prime){
            printf("%ld is emirp.\n", temp);
        }else if(prime){
            printf("%ld is prime.\n", temp);
        }else{
            printf("%ld is not prime.\n", temp);
        }
    }
    return 0;
}
