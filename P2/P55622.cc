#include <iostream>
using namespace std;

int main(){
  int n, i, x;
  cin >> n;
  x=n;
  if(n!=0){
    while(n!=0) {
      int res = n%10;
      n/=10;
      i++;
    }
    cout << "The number of digits of " << x << " is " << i <<".";
  }else cout << "The number of digits of " << x << " is " << "1.";

  cout << endl;
}
