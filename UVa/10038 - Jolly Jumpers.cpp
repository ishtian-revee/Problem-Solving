#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main(){
    int n;

    while(scanf("%d", &n) == 1){
        int arr[n], temp[n-1] = {0};

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        for(int i=0; i<n-1; i++){
            if(abs(arr[i] - arr[i+1]) < n){
                temp[abs(arr[i] - arr[i+1]) - 1]++;
            }
        }

        bool valid = true;
        for(int i=0; i<n-1; i++){
            if(temp[i] == 0){
                valid = false;
                break;
            }
        }

        if(valid){
            cout << "Jolly" << endl;
        }else{
            cout << "Not jolly" << endl;
        }
    }
}
