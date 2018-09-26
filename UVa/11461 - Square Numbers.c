#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main(){
    int a, b;

    while(scanf("%d %d", &a, &b) == 2){
        if(a == 0 && b == 0){ break; }

        int i, counter = 0, res;
        for(i=a; i<=b; i++){
            res = sqrt(i);
            res *= res;
            if(res == i){ counter++; }
        }
        printf("%d\n", counter);
    }
    return 0;
}
