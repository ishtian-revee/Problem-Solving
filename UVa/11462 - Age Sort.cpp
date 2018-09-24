#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int main(){
    long int n;

    while(scanf("%ld", &n) == 1){
        if(n == 0){ break; }

        long int ages[n];

        for(long int i=0; i<n; i++){
            scanf("%ld", &ages[i]);
        }

        sort(ages, ages + n);
        for(long int i=0; i<n; i++){
            printf("%ld", ages[i]);
            if(i<(n-1)){
                printf(" ");
            }
        }
        printf("\n");
    }
}
