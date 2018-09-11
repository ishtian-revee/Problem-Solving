#include<iostream>

using namespace std;

int main(){
    int counter = 0;
    string str;

    while(1){
        cin >> str;
        if(str == "*"){
            break;
        }

        if(str == "Hajj"){
            cout << "Case " << ++counter << ": Hajj-e-Akbar" << endl;
        }else if(str == "Umrah"){
            cout << "Case " << ++counter << ": Hajj-e-Asghar" << endl;
        }
    }
}

