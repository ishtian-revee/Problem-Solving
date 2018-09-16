#include<iostream>

using namespace std;

int main(){
    int n, sum = 0, avg, counter = 0, setNo = 0;

    while(cin >> n){
        if(n==0){ break; }

        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
            sum += arr[i];
        }

        avg = sum / n;
        for(int i=0; i<n; i++){
            if(arr[i] > avg){
                counter += (arr[i] - avg);
            }
        }

        cout << "Set #" << ++setNo << endl;
        cout << "The minimum number of moves is " << counter << "." << endl << endl;
        counter = 0;
        sum = 0;
    }
}

