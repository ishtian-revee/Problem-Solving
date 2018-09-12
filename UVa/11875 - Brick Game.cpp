#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
#include<cstdio>

using namespace std;

int main() {
    int tc, n, v[10], i, j, age;

    cin >> tc;
    for(i=0; i<tc; i++){
        cin >> n;
        for(j=0; j<n; j++){
            cin >> v[j];
        }
        sort(v, v+n);
        age = (n+1)/2;
        printf("Case %d: %d\n", i+1, v[age-1]);
    }
    return 0;
}
