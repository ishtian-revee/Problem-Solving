#include<iostream>
#include<vector>

using namespace std;

void miniMaxSum(vector<int> arr){
    long long minVal = 0, maxVal = 0, temp;
    // bubble sort
    for(int i=0; i<5; i++){
        for(int j=0; j<5-i-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    // finding minimum maximum value
    for(int i=0, j=1; i<4, j<5; i++, j++){
        minVal += arr[i];
        maxVal += arr[j];
    }
    cout << minVal << " " << maxVal;
}

int main(){
    vector<int> arr(5);
    for(int i=0; i<5; i++) cin >> arr[i];
    miniMaxSum(arr);
    return 0;
}
