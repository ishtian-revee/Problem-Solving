#include<stdio.h>

int main(){
    int tc, a, b, c, i, s;

    scanf("%d", &tc);

    if(tc>0 && tc<20){
        for(i=0; i<tc; i++){
            scanf("%d %d %d", &a, &b, &c);

            if((a>=1000 && b>=1000 && c>=1000) && (a<=10000 && b<=10000 && c<=10000)){
                if((a>b) && (a>c)){
                    if(b>c){
                        s = b;
                    }else{
                        s = c;
                    }
                }else if((b>a) && (b>c)){
                    if(a>c){
                        s = a;
                    }else{
                        s = c;
                    }
                }else if((c>a) && (c>b)){
                    if(b>a){
                        s = b;
                    }else{
                        s = a;
                    }
                }

                printf("Case %d: %d\n", i+1, s);
            }
        }
    }

    return 0;
}

