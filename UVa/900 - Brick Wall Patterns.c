#include<stdio.h>

int main(){
    int n, i;

    while(scanf("%d", &n) == 1){
        if(n == 0){ break; }
        int first = 0, second = 1, next;

        if(n == 1){
            next = first + second;
        }else{
            for(i=0; i<n; i++){
                next = first + second;
                first = second;
                second = next;
            }
        }
        printf("%d\n", next);
    }
    return 0;
}
