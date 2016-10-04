#include <iostream>
using namespace std;

int main(){
  int x, a, b, c;
  char p;
  a=b=c=0;
  cin >> x;

  while(x!=0){
    cin >> p;
    if(p=='a') a++;
    else if(p=='b') b++;
    else c++;
    x--;
  }
  if(a>=b and a>=c) cout << "majoria de a" << endl << a << " repeticio(ns)" << endl;
  else if(b>=c) cout << "majoria de b" << endl << b << " repeticio(ns)" << endl;
  else cout << "majoria de c" << endl << c << " repeticio(ns)" << endl;
}
