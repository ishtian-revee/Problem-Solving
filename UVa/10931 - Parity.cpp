#include<iostream>

using namespace std;

void calculate(int n){
    int counter = 0, bin[999], x = 0;
    for(; n>0; n=n/2){
        bin[x++] = n%2;
        if(bin[x-1]==1){
            counter++;
        }
    }

    cout << "The parity of ";
    for(int i=x-1; i>=0; i--){
        cout << bin[i];
    }
    cout << " is " << counter << " (mod 2)." << endl;
}

int main(){
    int n;

    while(cin >> n){
        if(n==0){
            break;
        }
        calculate(n);
    }
}

