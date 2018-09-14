#include<stdio.h>

int main(){
    int n, i, j, arr[10];

    scanf("%d", &n);
    printf("Lumberjacks:\n");
    for(i=0; i<n; i++){
        for(j=0; j<10; j++){
            scanf("%d", &arr[j]);
        }

        int asc = 0, dsc = 0;
        for(j=0; j<9; j++){
            if(arr[j]<arr[j+1]){
                asc++;
            }else if(arr[j]>arr[j+1]){
                dsc++;
            }else{
                asc++;
                dsc++;
            }
        }

        if(asc==9 || dsc==9){
            printf("Ordered\n");
        }else{
            printf("Unordered\n");
        }
    }
    return 0;
}

