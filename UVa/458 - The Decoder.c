#include<stdio.h>

int main(){
    int i;
    char msg[999];

    while(gets(msg)){
        for(i=0; msg[i]!='\0'; i++){
            char j;
            j = msg[i] - 7;
            printf("%c", j);
        }
        printf("\n");
    }
    return 0;
}
