#include <iostream>
using namespace std;

int main() {
	int d, m;
	cin >> d >> m;
	if(m == 12 || m == 1 && (d >= 22 && d <= 19)) {
		cout << "capricorn";
	}	
}
