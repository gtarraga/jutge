#include <iostream>
#include <cmath>
using namespace std;

int main(){
  cout.setf(ios::fixed);
  cout.precision(6);
  int n;
  double x, y, r;
  string s;
  cin >> n;
  for (int i=0; i<n; ++i){
    cin >> s;
    if (s == "rectangle"){
      cin >> x >> y;
      cout << x*y << endl;
    }
    if (s == "circle"){
      cin >> r;
      cout << M_PI*r*r << endl;
    }
  }
}
