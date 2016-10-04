#include <iostream>
using namespace std;

int main(){
  int n, x, s;
  s=0;
  cin >> n;
  while(cin >> x){
    if((x%n)==0) s++;
  }
  cout << s << endl;
}
