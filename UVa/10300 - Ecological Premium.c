#include<stdio.h>

int main() {
    int tc, n, a, b, c, i, j;
    long long sum = 0;

    scanf("%d", &tc);
    for(i=0; i<tc; i++){
        scanf("%d", &n);

        for(j=0; j<n; j++){
            scanf("%d %d %d", &a, &b, &c);
            sum += (long long)(a*c);
        }
        printf("%lld\n", sum);
        sum = 0;
    }
    return 0;
}

