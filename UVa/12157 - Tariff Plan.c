#include<stdio.h>

int main(){
    int tc, n, i, j;

    scanf("%d", &tc);
    for(i=0; i<tc; i++){
        scanf("%d", &n);
        int s, mile = 0, juice = 0;
        for(j=0; j<n; j++){
            scanf("%d", &s);
            int temp = s;

            if(s>0){
                mile += 10;
                juice += 15;
                s -= 29;
                temp -= 59;
            }

            for(; s>0; s=s-30){
                mile += 10;
            }

            for(; temp>0; temp=temp-60){
                juice += 15;
            }
        }

        if(mile == juice){
            printf("Case %d: Mile Juice %d\n", i+1, mile);
        }else if(mile < juice){
            printf("Case %d: Mile %d\n", i+1, mile);
        }else{
            printf("Case %d: Juice %d\n", i+1, juice);
        }
    }
    return 0;
}
