#include<stdio.h>

int main(){
    int tc, m, n, x, y;

    scanf("%d", &tc);

    while(tc--){
        scanf("%d %d", &m, &n);

        x = m+n;
        y = m-n;

        if(x<0 || y<0 || x%2==1 || y%2==1){
            printf("impossible\n");
        }else{
            printf("%d %d\n", x/2, y/2);
        }
    }
    return 0;
}

