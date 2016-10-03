#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  if(n!=0){
    while(n!=0) {
      int res = n%2;
      if(res==0) cout << '0';
      else cout << '1';
      n/=2;
    }
  }else cout << '0';

  cout << endl;
}
