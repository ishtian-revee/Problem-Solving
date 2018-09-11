#include <iostream>

using namespace std;

long reverseNum(long num){
	long rev = 0;

	while(num){
		rev *= 10;
		rev += num % 10;
		num /= 10;
	}
	return rev;
}

int main(){
	int tc;

	cin >> tc;
	for (int i=0; i<tc; i++){
		long n;
		cin >> n;

		long reverseNumber = reverseNum(n);
		int counter = 0;
		while(reverseNumber != n){
			n += reverseNumber;
			reverseNumber = reverseNum(n);
			counter++;
		}
		cout << counter << " " << n << endl;
	}
}

