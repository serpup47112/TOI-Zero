#include <iostream>
using namespace std;

int main() {
	int n1, n2, n3, even = 0, odd = 0;
	cin >> n1 >> n2 >> n3;
	if (n1 % 2 == 0) {
		even += 1;
	} else {
		odd += 1;
	}
	if (n2 % 2 == 0) {
		even += 1;
	} else {
		odd += 1;
	}
	if (n3 % 2 == 0) {
		even += 1;
	} else {
		odd += 1;
	}
	
	cout << "even " << even << endl << "odd " << odd;
}
