#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int main(){
    int tc, n, p, q, i, j;

    scanf("%d", &tc);
    for(i=0; i<tc; i++){
        scanf("%d %d %d", &n, &p, &q);
        int g[n], counter = 0, total;

        for(j=0; j<n; j++){
            scanf("%d", &g[j]);
        }

        sort(g, g+j);

        total = 0;
        for(j=0; j<n; j++){
            if(counter >= p){
                break;
            }

            total += g[j];
            counter++;
            if(total > q){
                total -= g[j];
                counter--;
                j++;
            }
        }
        printf("Case %d: %d\n", i+1, counter);
    }
    return 0;
}
