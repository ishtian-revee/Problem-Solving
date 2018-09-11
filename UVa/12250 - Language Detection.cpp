#include<iostream>

using namespace std;

int main(){
    int counter = 0;
    string str;

    while(1){
        cin >> str;
        if(str == "#"){
            break;
        }

        if(str == "HELLO"){
            cout << "Case " << ++counter << ": ENGLISH" << endl;
        }else if(str == "HOLA"){
            cout << "Case " << ++counter << ": SPANISH" << endl;
        }else if(str == "HALLO"){
            cout << "Case " << ++counter << ": GERMAN" << endl;
        }else if(str == "BONJOUR"){
            cout << "Case " << ++counter << ": FRENCH" << endl;
        }else if(str == "CIAO"){
            cout << "Case " << ++counter << ": ITALIAN" << endl;
        }else if(str == "ZDRAVSTVUJTE"){
            cout << "Case " << ++counter << ": RUSSIAN" << endl;
        }else{
            cout << "Case " << ++counter << ": UNKNOWN" << endl;
        }
    }
}

