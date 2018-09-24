#include<stdio.h>
#include<stdlib.h>

int main() {
    int a, b, c;

    while(scanf("%d %d %d", &a, &b, &c) == 3){
        if(a == 0 && b == 0 && c == 0){ break; }

        if((c*c) == ((a*a) + (b*b)) || (a*a) == ((b*b) + (c*c)) || (b*b) == ((c*c) + (a*a))){
            printf("right\n");
        }else{
            printf("wrong\n");
        }
    }
    return 0;
}
