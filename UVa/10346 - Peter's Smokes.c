#include<stdio.h>

int main(){
    int n, k;
    while(scanf("%d %d", &n, &k) != EOF){
        int counter = n;

        while(n>=k){
            counter += (n/k);
            n = (n/k) + (n%k);
        }
        printf("%d\n", counter);
    }
    return 0;
}
