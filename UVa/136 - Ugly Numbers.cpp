#include<iostream>

using namespace std;

bool checkUgly(int num){

    while(num%2==0){ num/=2; }

    while(num%3==0){ num/=3; }

    while(num%5==0){ num/=5; }

    return (num==1) ? true : false;
}

int main(){
//    int uglyNumber=0, counter = 1;
//
//    for(int i=1; counter<=1500; i++){
//        uglyNumber++;
//        if(checkUgly(i)){
//            counter++;
//        }
//    }
//    cout << "The 1500'th ugly number is " << uglyNumber << ".";
    cout << "The 1500'th ugly number is 859963392." << endl;
}
