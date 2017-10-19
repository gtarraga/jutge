#include<iostream>
using namespace std;
int main(){
	int pr,pro,mult=1;
	
	while(cin>>pr){
		
		if(pr/10 != 0){
		
			while(pr/10 != 0){
				pro = pr;
				while(pr/10 != 0 ){
					mult *= pr%10;
					pr = pr/10;
				}mult*=pr;
				cout<<"The product of the digits of "<<pro<<" is "<<mult<<"."<<endl;
				pro = mult;
				mult = 1;
				pr = pro;
			}
		}else {
			cout<<"The product of the digits of "<<pr<<" is "<<pr<<"."<<endl;
			}
		cout<<"----------"<<endl;
		}
		
		
			
		
	}
	
			
			
			
			
		
		


