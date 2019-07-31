#include<iostream>
#include<vector>
#include<stdio.h>

using namespace std;

void plusMinus(int n, vector<int> arr){
    int plusCount = 0, minusCount = 0, zeroCount = 0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] > 0) plusCount++;
        if(arr[i] < 0) minusCount++;
        if(arr[i] == 0) zeroCount++;
    }
    printf("%.6f\n%.6f\n%.6f", (float)plusCount/(float)n, (float)minusCount/(float)n, (float)zeroCount/(float)n);
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    plusMinus(n, arr);
    return 0;
}
