#include<iostream>
#include<vector>

using namespace std;

long aVeryBigSum(int n, vector<long> arr){
    long sum = 0;
    for(int i=0; i<n; i++) sum += arr[i];
    return sum;
}

int main(){
    int n;
    cin >> n;
    vector<long> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    cout << aVeryBigSum(n, arr);
    return 0;
}
