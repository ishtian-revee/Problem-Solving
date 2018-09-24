#include<stdio.h>
#include<stdlib.h>

int main() {
    int n, i, j;

    while(scanf("%d", &n) != EOF){
        int arr[n], counter = 0;

        for(i=0; i<n; i++){
            scanf("%d", &arr[i]);
        }

        for(i=1; i<n; i++){
            for(j=0; j<i; j++){
                if(arr[j] > arr[i]){
                    counter++;
                }
            }
        }

        printf("Minimum exchange operations : %d\n", counter);
    }
    return 0;
}
