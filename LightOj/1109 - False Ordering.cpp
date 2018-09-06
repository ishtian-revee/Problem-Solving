#include<iostream>
#define ELEMENTS 1000

using namespace std;

int main(){
    int tc, n, a[ELEMENTS], b[ELEMENTS], d=0, min, temp;

    for(int i=1; i<=ELEMENTS; i++){
        for(int j=1; j<=i/2; j++){
            if(i%j==0){
                d++;
            }
        }
        a[i-1] = ++d;
        d = 0;
    }

    for(int i=0; i<ELEMENTS; i++){
        b[i] = i+1;
    }

    // selection sort
    for(int i=0; i<ELEMENTS; i++){
        min = i;
        for(int j=i+1; j<ELEMENTS; j++){
            if(a[j]<a[min]){
                min = j;
            }
        }
        // swap numbers
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
        // swap indexes
        temp = b[i];
        b[i] = b[min];
        b[min] = temp;
    }

    // selection sort
    for(int i=0; i<ELEMENTS; i++){
        min = i;
        for(int j=i+1; j<ELEMENTS; j++){
            if(a[i] == a[j]){
                if(b[j]>b[min]){
                    min = j;
                }
            }
        }
        // swap indexes
        temp = b[i];
        b[i] = b[min];
        b[min] = temp;
    }

    cin >> tc;
    if(tc>0 && tc<=1005){
        for(int i=1; i<=tc; i++){
            cin >> n;
            if(n>=1 && n<=ELEMENTS){
                cout << "Case " << i << ": " << b[n-1] << endl;
            }
        }
    }
}
