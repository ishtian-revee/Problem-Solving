#include<iostream>
#include<stdio.h>
#include<cmath>

using namespace std;

int main(){
    int tc, i;
    long long int n;

    scanf("%d", &tc);
    for(i=0; i<tc; i++){
        scanf("%lld", &n);

        n *= 567;
        n /= 9;
        n += 7492;
        n *= 235;
        n /= 47;
        n -= 498;
        n /= 10;
        n = abs(n);
        printf("%d\n", (int)n%10);
    }
    return 0;
}


