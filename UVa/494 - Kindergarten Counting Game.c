#include<stdio.h>
#include<stdbool.h>

int main(){
    char word[9999];
    int i, counter = 0, flag;

    while(gets(word)){

        for(i=0; word[i]!='\0'; i++){
            if((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z')){
                flag = 1;
            }else{
                counter += flag;
                flag = 0;
            }
        }
        printf("%d\n", counter);
        counter = flag = 0;
    }
    return 0;
}

