#include<stdio.h>
#include<stdbool.h>

int main(){
    char c;
    bool firstQuote = true;

    while(scanf("%c", &c) != EOF){
        if(c=='"'){
            if(firstQuote){
                printf("``");
            }else{
                printf("''");
            }
            firstQuote = !firstQuote;
        }else{
            printf("%c", c);
        }
    }
    return 0;
}
