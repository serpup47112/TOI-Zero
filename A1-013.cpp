#include <iostream>
using namespace std;

int main() {
	int n;
	char c;
	cin >> c >> n;
	if(c == 'H' && n == 4567) {
		cout << "safe unlocked";
	} else if (c != 'H' && n == 4567) {
		cout << "safe locked - change char";
	} else if(c == 'H' && n != 4567) {
		cout << "safe locked - change digit";
	} else {
		cout << "safe locked";
	}
}
