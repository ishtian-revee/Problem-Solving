#include<stdio.h>

int main(){
    int a, b, c, d, l, i, counter = 0;

    while(scanf("%d %d %d %d %d", &a, &b, &c, &d, &l)){
        if(a==0 && b==0 && c==0 && d==0 && l==0){ break; }

        int f = 0;
        for(i=0; i<=l; i++){
            f = (a * (i*i)) + (b*i) + c;
            if(f%d==0){
                counter++;
            }
        }
        printf("%d\n", counter);
        counter = 0;
    }
    return 0;
}

