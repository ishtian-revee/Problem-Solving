#include<iostream>

using namespace std;

int main(){
    long long s, d, res = 0;

    while(scanf("%lld %lld", &s, &d) == 2){
        for(; s>0; s++){
            d = d - s;
            if(d<=0){
                res = s;
                printf("%lld\n", res);
                break;
            }
        }
    }
    return 0;
}

