#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int tc, c, f;
    float far = 0, cel = 0;

    cin >> tc;
    for(int i=0; i<tc; i++){
        cin >> c >> f;

        far = (9.0/5.0) * (float)c + 32.0;
        far += (float)f;
        cel = ((far-32.0) * 5.0) / 9.0;

        printf("Case %d: %.2f\n", i+1, cel);
    }
}

