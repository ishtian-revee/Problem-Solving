#include<iostream>

using namespace std;

int main(){
    int tc, amount, sum = 0;
    string operation;

    cin >> tc;
    if(tc>0 && tc<=100){
        for(int i=0; i<tc; i++){
            cin >> operation;
            if(operation == "donate"){
                cin >> amount;
                sum += amount;
            }else if(operation == "report"){
                cout << sum << endl;
            }
        }
    }
}
