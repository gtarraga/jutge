#include <iostream>
using namespace std;

int main() {
  int h, m, s;
  cin >> h >> m >> s;
  s++;
  if (s>=60) {
    s=00;
    m++;
  }
  if (m>=60)  {
    m=00;
    h++;
  }
  if(h>=24) h=0;
  if(h<10) cout << "0";
  cout << h;
  if(m<10) cout << ":0";
  else cout << ":";
  cout << m;
  if(s<10) cout << ":0";
  else cout << ":";
  cout << s << endl;
}
