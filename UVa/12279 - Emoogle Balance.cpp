#include<iostream>

using namespace std;

int main(){
    int n, counter = 0;

    while(cin >> n){
        if(n==0){ break; }

        int arr[n], a = 0, b = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            if(arr[i] == 0){
                a++;
            }else if(arr[i]>0){
                b++;
            }
        }

        cout << "Case " << ++counter << ": " << b-a << endl;
    }
}
