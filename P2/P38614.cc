#include <iostream>
using namespace std;

int main(){
  int a, count;
  count=0;
  cin >> a;

  for(int i=a; i>0; i/=100) count += (i%10);
  if(count%2==0 or count==0) cout << a << " IS COOL" << endl;
  else cout << a << " IS NOT COOL" << endl;
}
