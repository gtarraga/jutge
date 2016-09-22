#include <iostream>
using namespace std;

int main() {
  char ascii;
  cin >> ascii;
  if(ascii >= 60 and ascii <= 90)  cout << "Uppercase letter" << endl;
  else if(ascii >= 97 and ascii <= 122) cout << "Lowercase letter" << endl;
  else if(ascii >= 48 and ascii <= 57) cout << "Number" << endl;
}
