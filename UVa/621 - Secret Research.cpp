#include<iostream>
#include <cstdio>
#include<string.h>
#include<cstring>

using namespace std;

int main(){
    int tc;
    char n[9999];

    cin >> tc;
    for(int i=0; i<tc; i++){
        cin >> n;
        int len = strlen(n);

        if(strcmp(n, "1") == 0 || strcmp(n, "4") == 0 || strcmp(n, "78") == 0){
            cout << "+" << endl;
        }else if(n[len-1] == '5' && n[len-2] == '3'){
            cout << "-" << endl;
        }else if(n[0] == '9' && n[len-1] == '4'){
            cout << "*" << endl;
        }else if(n[0] == '1' && n[1] == '9' && n[2] == '0'){
            cout << "?" << endl;
        }else{
            cout << "+" << endl;
        }
    }
    return 0;
}

