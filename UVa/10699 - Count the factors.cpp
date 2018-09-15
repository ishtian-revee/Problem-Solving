#include<iostream>

using namespace std;

int main(){
    int j = 0, counter = 0, temp = 0, num, arr[9999];
    long long int n;

     while(cin >> n){
        if(n==0){ break; }

        num = n;
        for(int i=2; i<=n;){
            if(n%i==0){
                n = n/i;
                arr[j++] = i;
            }else{
                i++;
            }
        }

        for(int k=0; k<j; k++){
            if(arr[k] != temp){
                counter++;
                temp = arr[k];
            }
        }
        cout << num << " : " << counter << endl;
        counter = 0;
        j = 0;
        temp = 0;
     }
}

