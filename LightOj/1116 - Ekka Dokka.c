#include<stdio.h>
#include<math.h>

int main(){
    long long int w;
    long long int tc, i, j, odd, valid, limit;

    scanf("%lld", &tc);
    for(i=1; i<=tc; i++){
        scanf("%lld", &w);

        limit = w/2;
        valid = 0;
        odd = 0;

        for(j=2; j<=limit; j*=2){
            if(w%j==0){
                odd = w/j;
            }

            if(odd%2==1){
                valid = 1;
                break;
            }
        }
        if(valid==1){
            printf("Case %lld: %lld %lld\n", i, odd, j);
        }else{
            printf("Case %lld: Impossible\n", i);
        }
    }
    return 0;
}
