#include <iostream>
using namespace std;

int main() {
	int d, m;
	cin >> m >> d;
	
	if(d == 21 && m == 3) {
		cout << "spring";
	} else if(m == 1 || m == 2 || m == 3) {
		cout << "winter";
	}
	
	if(d == 21 && m == 6) {
		cout << "summer";
	} else if(m == 4 || m == 5 || m == 6) {
		cout << "spring";
	}
	
	if(d == 21 && m == 9) {
		cout << "fall";
	} else if(m == 7 || m == 8 || m == 9) {
		cout << "summer";
	}
	
	if(d == 21 && m == 12) {
		cout << "winter";
	} else if(m == 10 || m == 11 || m == 12) {
		cout << "fall";
	}

	return 0;
}
