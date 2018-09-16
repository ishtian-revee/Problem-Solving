#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int m, n;

    while(cin >> m >> n){
        if(m==-1 && n==-1){ break; }

        int counter = abs(m-n);

        if(counter>50){
            counter = 50 - (counter-50);
        }
        cout << counter << endl;
    }
}
