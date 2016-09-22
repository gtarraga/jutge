#include <iostream>

using namespace std;

int main(){
  cout.setf(ios::fixed);
  cout.precision(4);

  double capital;
  double interestRate;
  double time;//years
  string type;

  cin >> capital >> interestRate >>time >> type;

  double result=1;
  if(type=="simple"){
    result= capital +(capital *(interestRate/100)*time);
  }else if(type=="compound"){
    for(int i=0; i<time; i++){
      result*=(1+(interestRate/100));
    }
    result=capital*result;
  }
  cout << result <<endl;
}
