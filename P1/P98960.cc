#include <iostream>
using namespace std;

int main() {
  char ascii;
  cin >> ascii;
  if(ascii >= 60 and ascii <= 90) ascii += 32;
  else if(ascii >= 97 and ascii <= 122) ascii -= 32;
  cout << ascii << endl;
}
