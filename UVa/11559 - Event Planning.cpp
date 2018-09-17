#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int main(){
    int n, b, h, w, p;

    while(scanf("%d %d %d %d", &n, &b, &h, &w) == 4){
        int beds[w], ans = b+1, temp = 0;

        for(int i=0; i<h; i++){
            cin >> p;

            for(int j=0; j<w; j++){
                cin >> beds[j];
                temp = max(temp, beds[j]);
            }

            if(temp>=n){
                ans = min(ans, n*p);
            }
        }

        if(ans == b+1){
            cout << "stay home" << endl;
        }else{
            cout << ans << endl;
        }
    }
    return 0;
}
