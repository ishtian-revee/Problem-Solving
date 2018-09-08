
#include<stdio.h>

int process(int num){
    int counter = 0;

    while(num!=1){
        counter++;
        if(num%2!=0){
            num = (3*num) + 1;
        }else{
            num = num/2;
        }
    }
    return counter;
}

int main(){
    int a, b, i, counter, max, temp;

    while(scanf("%d %d", &a, &b) == 2){

        max = 0;
        counter = 0;
        printf("%d %d ", a, b);

        if(a>b){
            temp = a;
            a = b;
            b = temp;
        }

        for(i=a; i<=b; i++){
            counter = process(i);
            if(counter >= max){
                max = counter;
            }
        }
        printf("%d\n", max+1);
    }
    return 0;
}
