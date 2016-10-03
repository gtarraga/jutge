#include <iostream>
using namespace std;

int main(){
	cout.setf(ios::fixed);
	cout.precision(4);
	
	double h=0;
	int n;
	cin >> n;
	while(n>0){
		h+= 1.0/n;
		--n;
	}
	cout << h << endl;
}
