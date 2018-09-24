#include<stdio.h>
#include<string.h>

int main() {
    char n[1000];
    int i;

    while(1){
        scanf("%s", n);
        int len = strlen(n);

        if(n[0] == '0' && len == 1){ break; }

        int sum = 0;
        for(i=0; i<len; i++){
            sum = (sum * 10 + n[i]-'0')%11;
        }

        if(sum == 0){
            printf("%s is a multiple of 11.\n", n);
        }else{
            printf("%s is not a multiple of 11.\n", n);
        }
    }
    return 0;
}
