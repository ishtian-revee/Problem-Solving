#include<stdio.h>

int main(){
    int n, i, res = 0, rem = 0, temp;

    while(scanf("%d", &n)){
        if(n==0){ break; }
        temp = n;

        for(; n>1;){
            res += (n/3);
            rem = n%3;
            if(rem>0){
                n = rem + (n/3);

                if(n<3){
                    n += (3-n);
                }
            }else{
                n = n/3;
            }
        }

        printf("%d\n", res);
        res = 0;
        rem = 0;
    }
    return 0;
}

