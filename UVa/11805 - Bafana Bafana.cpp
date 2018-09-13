#include<iostream>

using namespace std;

int main(){
    int tc, n, k, p;

    cin >> tc;
    for(int i=0; i<tc; i++){
        cin >> n >> k >> p;

        for(int j=0; j<p; j++){
            if(k == n){
                k = 1;
            }else{
                k++;
            }
        }
        cout << "Case " << i+1 << ": " << k << endl;
    }
}


