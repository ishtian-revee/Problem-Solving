#include<stdio.h>

int main(){
    int  n, i;
    while(scanf("%d", &n)){
        if(n==0){ break; }

        int res = 0;
        for(i=n; i>0; i--){
            res += (i*i);
        }
        printf("%d\n", res);
    }
    return 0;
}

