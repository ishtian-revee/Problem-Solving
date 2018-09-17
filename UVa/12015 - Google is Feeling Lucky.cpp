#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int tc, r[10], max;
    char urls[10][100];

    cin >> tc;
    for(int i=0; i<tc; i++){
        for(int j=0; j<10; j++){
            cin >> urls[j] >> r[j];
        }

        max = 0;
        for(int j=0; j<10; j++){
            if(r[j]>max){
                max = r[j];
            }
        }

        cout << "Case #" << i+1 << ":" << endl;
        for(int j=0; j<10; j++){
            if(r[j] == max){
                cout << urls[j] << endl;
            }
        }
    }
}
