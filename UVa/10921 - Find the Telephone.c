#include<stdio.h>

int main() {
    int i;
    char c[30];

    while(scanf("%s", c) != EOF){
        for(i=0; c[i]!='\0'; i++){
            if(c[i]=='0'){
                printf("0");
            }else if(c[i]=='1'){
                printf("1");
            }else if(c[i]=='-'){
                printf("-");
            }else if(c[i]>='A' && c[i]<='C'){
                printf("2");
            }else if(c[i]>='D' && c[i]<='F'){
                printf("3");
            }else if(c[i]>='G' && c[i]<='I'){
                printf("4");
            }else if(c[i]>='J' && c[i]<='L'){
                printf("5");
            }else if(c[i]>='M' && c[i]<='O'){
                printf("6");
            }else if(c[i]>='P' && c[i]<='S'){
                printf("7");
            }else if(c[i]>='T' && c[i]<='V'){
                printf("8");
            }else if(c[i]>='W' && c[i]<='Z'){
                printf("9");
            }
        }
        printf("\n");
    }
    return 0;
}

