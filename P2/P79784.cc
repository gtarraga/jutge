#include <iostream>
using namespace std;

int main(){
  int x, y;
  char c;
  x=y=0;

  while(cin >> c){
    if(c=='n') y--;
    else if(c=='s') y++;
    else if(c=='w') x--;
    else if(c=='e') x++;
  }
  cout << "(" << x << ", " << y << ")" << endl;
}
