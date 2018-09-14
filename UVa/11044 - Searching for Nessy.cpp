#include<iostream>

using namespace std;

int main(){
    int tc, m, n, res;

    cin >> tc;
    for(int i=0; i<tc; i++){
        cin >> m >> n;

        m /= 3;
        n /= 3;
        res = m * n;
        cout << res << endl;
    }
}

