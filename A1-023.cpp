#include <iostream>
using namespace std;

int main() {
	int d;
	char a;
	cin >> d >> a;
	if(a == 'C' || a == 'c') {
		if(d > 0 && d < 100) {
			cout << "liquid";
		} else if(d <= 0) {
			cout << "solid";
		} else {
			cout << "gas";
		}
	}
	if(a == 'F' || a == 'f') {
		if(d > 32 && d < 212) {
			cout << "liquid";
		} else if(d <= 32) {
			cout << "solid";
		} else {
			cout << "gas";
		}
	}
}
