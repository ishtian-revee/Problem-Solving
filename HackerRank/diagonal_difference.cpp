#include<iostream>
#include<vector>
#include<stdlib.h>

using namespace std;

int diagonalDifference(int n, vector<vector<int> > arr){
    int diagonal_1 = 0, diagonal_2 = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j) diagonal_1 += arr[i][j];
            if((i+j) == (n-1)) diagonal_2 += arr[i][j];
        }
    }
    return abs(diagonal_1 - diagonal_2);
}

int main(){
    int n, result;
    cin >> n;
    vector<vector<int> > arr(n);

    for(int i=0; i<n; i++){
        arr[i].resize(n);
        for(int j=0; j<n; j++) cin >> arr[i][j];
    }
    cout << diagonalDifference(n, arr) << endl;
    return 0;
}
