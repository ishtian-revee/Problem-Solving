#include<iostream>

using namespace std;

int d[4];

int calculateOnes(int arr[], int size){
    int counter = 0;
    for(int i=0; i<size; i++){
        if(arr[i] == 1){
            counter++;
        }
    }
    return counter;
}

int convertToDec(int n){
    int a = 0, m = 0;

    for(; n>0; n=n/10){
        d[a++] = n%10;
    }

    for(int i=0; i<a; i++){
        m = m * 16 + d[i];
    }
    return m;
}

int main(){
    int tc, n, x, b1, b2, temp1[9999], temp2[9999], a = 0, dec;

    cin >> tc;
    for(int i=0; i<tc; i++){
        cin >> n;
        x = n;

        // for decimal value
        for(; n>0; n=n/2){
            temp1[a++] = n%2;
        }
        b1 = calculateOnes(temp1, a);
        a = 0;

        // for hexadecimal value
        dec = convertToDec(x);
        for(; dec>0; dec/=2){
            temp2[a++] = dec%2;
        }
        b2 = calculateOnes(temp2, a);
        a = 0;

        cout << b1 << " " << b2 << endl;
    }
}
