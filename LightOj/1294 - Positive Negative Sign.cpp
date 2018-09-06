#include<iostream>
#include<stdio.h>
#define LL long long

using namespace std;

int main(){
    int tc, ans;

    cin >> tc;
    for(int i=1; i<=tc; i++){
        LL n, m;
        scanf("%lld %lld", &n, &m);
        ans = (n*m)/2;
        printf("Case %d: %lld\n", i, ans);
    }
}

