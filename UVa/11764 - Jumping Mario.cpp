#include<iostream>

using namespace std;

int main(){
    int tc, n, x, high = 0, low = 0, cur;

    cin >> tc;
    for(int i=0; i<tc; i++){
        cin >> n;

        for(int j=0; j<n; j++){
            cin >> x;

            if(j!=0){
                if(x>cur){
                    high++;
                }else if(x<cur){
                    low++;
                }
            }
            cur = x;
        }
        cout << "Case " << i+1 << ": " << high << " " << low << endl;
        high = low = 0;
    }
}

