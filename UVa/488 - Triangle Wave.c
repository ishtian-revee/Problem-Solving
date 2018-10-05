#include<stdio.h>

int main(){
    int tc, a, f, i, j, k;

    scanf("%d", &tc);
    while(tc--){
        scanf("%d\n%d", &a, &f);

        for(i=0; i<f; i++){
            int m = 0;
            for(j=1; j<=a; j++){
                m++;
                for(k=1; k<=j; k++){
                    printf("%d", m);
                }
                printf("\n");
            }

            m--;
            for(j=a-1; j>0; j--){
                for(k=j; k>0; k--){
                    printf("%d", m);
                }
                m--;
                printf("\n");
            }

            if(i<f-1){
                printf("\n");
            }
        }

        if(tc){
            printf("\n");
        }
    }
    return 0;
}
