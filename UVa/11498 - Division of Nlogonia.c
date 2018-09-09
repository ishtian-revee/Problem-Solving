#include<stdio.h>

int main(){
    int q, a, b, x, y, i;

    while(scanf("%d", &q)){
        if(q==0){
            break;
        }

        scanf("%d %d", &x, &y);

        for(i=0; i<q; i++){
            scanf("%d %d", &a, &b);

            if(a==x || b==y){
                printf("divisa\n");
            }else{
                if(a>x){
                    if(b>y){
                        printf("NE\n");
                    }else{
                        printf("SE\n");
                    }
                }else{
                    if(b>y){
                        printf("NO\n");
                    }else{
                        printf("SO\n");
                    }
                }
            }
        }
    }

    return 0;
}
