#include<stdio.h>

int main(){
    int tc, a, b, i, j, temp, sum = 0;

    scanf("%d", &tc);
    if(tc>0 && tc<=100){
        for(i=0; i<tc; i++){
            scanf("%d", &a);
            scanf("%d", &b);

            if(a>b){
                temp = a;
                a = b;
                b = temp;
            }

            for(j=a; j<=b; j++){
                if(j%2!=0){
                    sum += j;
                }
            }
            printf("Case %d: %d\n", i+1, sum);
            sum = 0;
        }
    }
    return 0;
}
