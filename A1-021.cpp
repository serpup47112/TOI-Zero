#include <iostream>
using namespace std;

int main(){
	int A,B,C;
	cin>>A;
	B=A;
	C=A;
	A%=4;
	B%=100;
	C%=400;
	if((A==0&&B!=0)||C==0){
		cout<<"yes";
	}else{
		cout<<"no";
	}
}
