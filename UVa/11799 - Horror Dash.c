#include<stdio.h>

int main(){
    int tc, n, i, j, a, max;

    scanf("%d", &tc);

    for(i=0; i<tc; i++){
        scanf("%d", &n);

        max = 0;
        for(j=0; j<n; j++){
            scanf("%d", &a);

            if(a>max){
                max = a;
            }
        }

        printf("Case %d: %d\n", i+1, max);
    }

    return 0;
}
