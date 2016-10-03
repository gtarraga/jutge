#include <iostream>
using namespace std;

int main(){
  int n, m, o, p;
  cin >> n >> m;
  o=n;
  p=m;

  while(n != m){
    if(n > m) n-=m;
    else m-=n;
  }
  cout << "The gcd of " << o << " and "<< p << " is " << n <<"." << endl;
}
