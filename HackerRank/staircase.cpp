#include<iostream>
#include<limits>

using namespace std;

void staircase(int n){
    for(int i=1; i<=n; i++){
        for(int j=0; j<n-i; j++) cout << " ";
        for(int k=0; k<i; k++) cout << "#";
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    staircase(n);
    return 0;
}
