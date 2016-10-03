#include <iostream>
using namespace std;

int main(){
	int r, c,t;
	char x;
	cin >> r >> c;
	t=0;
	
	for(int i=0; i<c; i++){
		for(int j=0; j<r; j++){
			cin >> x;
			t += x - '0';
		}
	}
	cout << t << endl;
}
