#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int counter[52];
char temp[52];

void charCalculate(char a){
    for(int i=0; i<52; i++){
        if(temp[i] == a){
            counter[i] += 1;
        }
    }
}

int main(){
    string str;
    char res[52];
    int max, a;

    while(getline(cin, str)){

        for(int i=0, j=65, k=97; i<52; i++){
            counter[i] = 0;

            if(i>=26){
                temp[i] = (char)k;
                k++;
            }else{
                temp[i] = (char)j;
                j++;
            }
        }

        int len = str.length();
        for(int i=0, j=0; i<len; i++){
            if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')){
                charCalculate(str[i]);
            }
        }

        max = 0;
        for(int i=0; i<52; i++){
            if(counter[i] > max){
                max = counter[i];
            }
        }

        a = 0;
        for(int i=0; i<52; i++){
            if(counter[i] == max){
                res[a] = temp[i];
                a++;
            }
        }
        res[a] = '\0';

        for(int i=0; res[i]!='\0'; i++){
            cout << res[i];
        }
        cout << " " << max << endl;
    }
}
