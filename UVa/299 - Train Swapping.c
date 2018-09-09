#include<stdio.h>

int main(){
    int tc, n, i, j, k, temp, counter = 0;

    scanf("%d", &tc);

    for(i=0; i<tc; i++){
        scanf("%d", &n);
        if(n>=0 && n<=100){
            int arr[n];
            for(j=0; j<n; j++){
                scanf("%d", &arr[j]);
            }

            for(j=0; j<n; j++){
                for(k=j+1; k<n; k++){
                    if(arr[j] > arr[k]){
                        temp = arr[j];
                        arr[j] = arr[k];
                        arr[k] = temp;
                        counter++;
                    }
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", counter);
        counter = 0;
    }
    return 0;
}
