#include<iostream>
#include<cstdio>

using namespace std;

int main(){
    int n;

    while(1){
        scanf("%d",&n);
        if(n==0){
            break;
        }

        if(n<=101){
            printf("f91(%d) = 91\n", n);
        }else{
            printf("f91(%d) = %d\n", n, n-10);
        }
    }
    return 0;
}

