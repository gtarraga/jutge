#include <iostream>
#include <string>
using namespace std;

int main(){
  string x;
  int n=0;
  while(cin >> x){
    if(x=="hello") ++n;
  }
  cout << n << endl;
}
