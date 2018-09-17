#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int n, a, b, i, j, counter = 0, temp;
    char c[1000005];

    while(scanf("%s %d", c, &n) == 2){
        printf("Case %d:\n", ++counter);

        for(i=0; i<n; i++){
            scanf("%d %d", &a, &b);
            if(b<a){
                temp = b;
                b = a;
                a = temp;
            }

            bool valid = true;
            for(j=a; j<b; j++){
                if(c[j] != c[j+1]){
                    valid = false;
                }
            }

            if(valid){
                printf("Yes\n");
            }else{
                printf("No\n");
            }
        }
    }
}
