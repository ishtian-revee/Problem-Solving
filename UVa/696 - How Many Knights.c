#include<stdio.h>

int main(){
    int m, n, a, res, ans;

    while(scanf("%d %d", &m, &n)){
        if(m==0 || n==0){
            break;
        }

        res = m*n;

        if(m==1 || n==1){
            ans = res;
        }else if(m==2 || n==2){

            if(m==2){
                a = n;
            }else{
                a = m;
            }

            if(a%4==0){
                ans = a;
            }else if(a%4==1){
                ans = a+1;
            }else if(a%4==2){
                ans = a+2;
            }else if(a%4==3){
                ans = a+1;
            }
        }else if(res%2==0){
            ans = res/2;
        }else{
            ans = (res/2)+1;
        }

        printf("%d knights may be placed on a %d row %d column board.\n", ans, m, n);
    }

    return 0;
}
