#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int tc, n, i, j, arr[20], mid, res = 0;

    cin >> tc;
    for(i=0; i<tc; i++){
        cin >> n;

        for(j=0; j<n; j++){
            cin >> arr[j];
        }

        sort(arr, arr+n);
        mid = (arr[0] + arr[n-1]) / 2;

        res += (mid - arr[0]);
        for(j=0; j<n; j++){
            if(j!=(n-1)){
                res += (arr[j+1] - arr[j]);
            }
        }
        res += (arr[n-1] - mid);

        cout << res << endl;
        res = 0;
    }
    return 0;
}


