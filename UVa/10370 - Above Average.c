#include<stdio.h>

int main() {
    int tc, n, i, j;

    scanf("%d", &tc);
    for(i=0; i<tc; i++){
        scanf("%d", &n);
        int arr[n], counter = 0;
        float avg = 0, above;

        for(j=0; j<n; j++){
            scanf("%d", &arr[j]);
            avg += (float)arr[j];
        }

        avg = avg/n;
        for(j=0; j<n; j++){
            if((float)arr[j] > avg){
                counter++;
            }
        }

        above = ((float)counter/(float)n)*100;
        printf("%.3f%%\n", above);
    }
    return 0;
}

