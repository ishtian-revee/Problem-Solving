#include<stdio.h>

int main(){
    int tc, i, x, y, z, res;

    scanf("%d", &tc);
    for(i=0; i<tc; i++){
        scanf("%d %d %d", &x, &y, &z);

        res = z * (2*x-y) / (x+y);
        if(res<=0){
            printf("0\n");
        }else{
            printf("%d\n", res);
        }
    }
	return 0;
}
