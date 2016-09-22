#include <iostream>
using namespace std;

int  main (){
    int a, b, c;
    int minim;
    cin >> a >> b >>c;
    if (a <= b and a <= c) {
      minim=a;
    }
    else if (b<= c){
      minim=b;
    }
    else {
      minim = c;
    }
    cout << minim <<endl;
}