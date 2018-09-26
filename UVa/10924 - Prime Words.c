#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isPrime(int num){
    int i;
    int s = sqrt(num);
    for(i=2; i<=s; i++){
        if(num%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    char word[20];

    while(scanf("%s", word) != EOF){
        int i, sum = 0, len = strlen(word);
        bool prime = false;

        for(i=0; i<len; i++){
            if(word[i] >= 'a' && word[i] <= 'z'){
                sum += (word[i]-97) + 1;
            }else if(word[i] >= 'A' && word[i] <= 'Z'){
                sum += (word[i]-65) + 27;
            }
        }

        prime = isPrime(sum);
        if(prime){
            printf("It is a prime word.\n");
        }else{
            printf("It is not a prime word.\n");
        }
    }
    return 0;
}
