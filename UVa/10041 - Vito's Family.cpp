#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int tc, r;

    cin >> tc;
    for(int i=0; i<tc; i++){
        cin >> r;
        int arr[r], v, d = 0;

        for(int j=0; j<r; j++){
            cin >> arr[j];
        }

        sort(arr, arr + r);
        v = arr[r/2];

        for(int j=0; j<r; j++){
            d += abs(v-arr[j]);
        }
        cout << d << endl;
    }
}
