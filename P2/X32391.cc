#include <iostream>
using namespace std;

int main(){
  int d, n, t, a, cont, suma;
  cin >> d >> n >> t;

  for(int i=0; i<t; i++){
    cin >> a;
    if(n+a-d>0) cont++;
    n=n+a-d;
  }
  cout << cont << endl;
}
