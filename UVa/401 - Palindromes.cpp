#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>

using namespace std;

bool checkReverse(char a, char b){
    if(a == 'A' && b == 'A'){
        return true;
    }else if(a == 'E' && b == '3'){
        return true;
    }else if(a == 'H' && b == 'H'){
        return true;
    }else if(a == 'I' && b == 'I'){
        return true;
    }else if(a == 'J' && b == 'L'){
        return true;
    }else if(a == 'L' && b == 'J'){
        return true;
    }else if(a == 'M' && b == 'M'){
        return true;
    }else if(a == 'O' && b == 'O'){
        return true;
    }else if(a == 'S' && b == '2'){
        return true;
    }else if(a == 'T' && b == 'T'){
        return true;
    }else if(a == 'U' && b == 'U'){
        return true;
    }else if(a == 'V' && b == 'V'){
        return true;
    }else if(a == 'W' && b == 'W'){
        return true;
    }else if(a == 'X' && b == 'X'){
        return true;
    }else if(a == 'Y' && b == 'Y'){
        return true;
    }else if(a == 'Z' && b == '5'){
        return true;
    }else if(a == '1' && b == '1'){
        return true;
    }else if(a == '2' && b == 'S'){
        return true;
    }else if(a == '3' && b == 'E'){
        return true;
    }else if(a == '5' && b == 'Z'){
        return true;
    }else if(a == '8' && b == '8'){
        return true;
    }else{
        return false;
    }
}

bool checkMirroed(string str, int len){
    for(int i=len-1, j=0; i>=0; i--, j++){
        if(!checkReverse(str[j], str[i])){
            return false;
        }
    }
    return true;
}

int main(){
    string word;

    while(getline(cin, word)){
        bool isPalindrome = true, isMirrored;
        int length = word.length();

        for(int i=length-1, j=0; i>=0; i--, j++){
            if(word[j] != word[i]){
                isPalindrome = false;
                break;
            }
        }
        isMirrored = checkMirroed(word, length);

        if(!isPalindrome && !isMirrored){
            cout << word << " -- is not a palindrome." << endl << endl;
        }else if(isPalindrome && !isMirrored){
            cout << word << " -- is a regular palindrome." << endl << endl;
        }else if(!isPalindrome && isMirrored){
            cout << word << " -- is a mirrored string." << endl << endl;
        }else if(isPalindrome && isMirrored){
            cout << word << " -- is a mirrored palindrome." << endl << endl;
        }
    }
}
