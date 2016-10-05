#include <iostream>
using namespace std;

int main(){
	int n, b, sum;
	cin >> b;
	while (cin >> n){
		cout << n << ": ";
		sum = 0;
		while (n > 0) {
			int res = n % b;
			sum += res;
			n /= b;
		}
		cout << sum << endl;
	}
}