#include<stdio.h>

int main(){
    int tc, l, w, h, i;

    scanf("%d", &tc);
    for(i=0; i<tc; i++){
        scanf("%d %d %d", &l, &w, &h);

        if((l>0 && w>0 && h>0) && (l<=50 && w<=50 && h<=50)){
            if(l>20 || w>20 || h>20){
                printf("Case %d: bad\n", i+1);
            }else{
                printf("Case %d: good\n", i+1);
            }
        }
    }
    return 0;
}
