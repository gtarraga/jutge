#include <iostream>
using namespace std;

int main(){
  int y, d, h, m, s;
  cin >> y >> d >> h >> m >> s;

  s += y*365*24*3600;
  s += d*24*3600;
  s += h*3600;
  s += m*60;
  cout << s << endl;
} 
