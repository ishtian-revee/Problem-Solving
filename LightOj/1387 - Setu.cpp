#include<iostream>

using namespace std;

int main(){
    int tc, n, amount, sum = 0;
    string operation;

    cin >> tc;
    if(tc>0 && tc<=100){
        for(int i=0; i<tc; i++){
            cin >> n;
            cout << "Case " << (i+1) << ":" << endl;
            if(n>0 && n<=100){
                for(int j=0; j<n; j++){
                    cin >> operation;
                    if(operation == "donate"){
                        cin >> amount;
                        sum += amount;
                    }else{
                        cout << sum << endl;
                    }
                }
            }
            sum = 0;
        }
    }
}
