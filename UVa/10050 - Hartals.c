#include<stdio.h>
#include<stdbool.h>

int main(){
    int tc, d, p, i, j;

    scanf("%d", &tc);
    for(i=0; i<tc; i++){
        scanf("%d %d", &d, &p);
        int h[p], k = 0, counter = 0;

        for(j=0; j<p; j++){
            scanf("%d", &h[j]);
        }

        for(j=1; j<=d; j++){
            if(j%7==0 || j%7==6){ continue; }

            bool found = false;
            for(k=0; k<p; k++){
                if(j%h[k]==0){ found = true; }
            }

            if(found){ counter++; }
        }
        printf("%d\n", counter);
    }
    return 0;
}
