#include<stdio.h>

int func(int num){
    if(num<=9){ return num; }
    int sum = 0;
    while(num){
        sum += num%10;
        num /= 10;
    }
    return func(sum);
}

int main() {
    int n;

    while(scanf("%d", &n) == 1 && n){
        printf("%d\n", func(n));
    }
    return 0;
}

