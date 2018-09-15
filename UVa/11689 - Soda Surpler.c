#include<stdio.h>

int main(){
    int tc, e, f, c, i, res = 0, rem = 0, total;

    scanf("%d", &tc);
    for(i=0; i<tc; i++){
        scanf("%d %d %d", &e, &f, &c);

        total = e + f;
        for(; total>=c;){
            res += (total/c);
            rem = total%c;
            if(rem>0){
                total = rem + (total/c);
            }else{
                total = total/c;
            }
        }
        printf("%d\n", res);
        res = 0;
        rem = 0;
    }
    return 0;
}

