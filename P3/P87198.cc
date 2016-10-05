#include <iostream>
using namespace std;

void line(int espais, int Xs){
    for (int i = 0; i < espais; ++i) cout << " ";
    for (int i = 0; i < Xs; ++i) cout << "X";
    cout << endl;
}

int main(){
  int a;
  while(cin >> a){
    for (int i = 0; i < a - 1; ++i) line(a - i -1, a + 2*i);
    for (int i = 0; i < a - 1; ++i) line(0, 3*a - 2);
    for (int i = a - 1; i >= 0; --i) line(a - 1 - i, a +2*i);
    cout << endl;
    }
}
