#include<iostream>

using namespace std;

int main(){
    int a, b, c;

    while(cin >> a >> b >> c){
        if((a!=b && a!=c) && (b==c)){
            cout << "A" << endl;
        }else if((b!=c && b!=a) && (c==a)){
            cout << "B" << endl;
        }else if((c!=a && c!=b) && (a==b)){
            cout << "C" << endl;
        }else if(a==b && b==c){
            cout << "*" << endl;
        }
    }
}
