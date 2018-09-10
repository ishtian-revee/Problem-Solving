#include<iostream>
#include<string>

using namespace std;

int main(){
    string word;
    int tc, counter = 0;

    cin >> tc;

    for(int i=0; i<tc; i++){
        cin >> word;

        if(word.length() == 5){
            cout << 3 << endl;
        }else{
            if(word[0] == 'o'){
                counter++;
            }

            if(word[1] == 'n'){
                counter++;
            }

            if(word[2] == 'e'){
                counter++;
            }

            if(counter>=2){
                cout << 1 << endl;
            }else{
                cout << 2 << endl;
            }
        }
        counter = 0;
    }
}
