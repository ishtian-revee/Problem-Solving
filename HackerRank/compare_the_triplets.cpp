#include<iostream>
#include<vector>

using namespace std;

const int n = 3;
//int *compareTriplets(int a[n], int b[n]){
vector<int> compareTriplets(int a[n], int b[n]){
//    int result[2];
    vector<int> result(2);
    int pointOfAlice = 0, pointOfBob = 0;
    // comparison between alice and bobs triplets
    for(int i=0; i<n; i++){
        if(a[i] > b[i]) pointOfAlice++;
        if(a[i] < b[i]) pointOfBob++;
    }
    // assigning alice's point and bob's point
    result[0] = pointOfAlice;
    result[1] = pointOfBob;
    return result;
}

int main(){
    int alice[n], bob[n];
    for(int i=0; i<n; i++){ cin >> alice[i]; }
    for(int i=0; i<n; i++){ cin >> bob[i]; }

//    int *result = compareTriplets(alice, bob);
    vector<int> result = compareTriplets(alice, bob);
    // display answer
    for(int i=0; i<result.size(); i++){
        cout << result[i];
        if(i != 1) cout << " ";
    }
    return 0;
}
