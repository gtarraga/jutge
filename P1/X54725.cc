#include <iostream>
using namespace std;

int main(){
  int a, b;
  int minim;
  cin >> a >> b;

  if(a>b) minim=b;
  else if(b>a) minim=a;
  else minim=a;
  cout << minim << endl;
}
