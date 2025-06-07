#include<iostream>
#include<string>
using namespace std;

int main() {
	string a;
	cin >> a;
	if(a.substr(0, 3) == "1" && a.substr(0, 4) == "6") {
		cout << "yes";
	} else {
		cout << "no";
	}
	
}
