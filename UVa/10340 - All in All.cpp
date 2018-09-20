#include<iostream>
#include<string.h>

using namespace std;

int main(){
    string s, t;

    while(cin >> s){
        cin >> t;

        int j = 0, len = s.length();
        int arr[len];
        bool valid = true;

        for(int k=0; k<len; k++){
            arr[k] = 0;
        }

        for(int i=0; i<len; i++){
            for(; j<t.length(); j++){
                if(s[i] == t[j]){
                    arr[i] = 1;
                    j++;
                    break;
                }
            }
        }

        for(int i=0; i<len; i++){
            if(arr[i] == 0){
                valid = false;
                break;
            }
        }

        if(valid){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
}
