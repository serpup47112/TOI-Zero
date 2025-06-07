#include <iostream>
using namespace std;

int main() {
	int n1, n2, sum;
	cin >> n1 >> n2;
	sum = n1 + n2;
	cout << sum << endl;
	if (sum >= 50) {
		cout << "pass";
	} else {
		cout << "fail";
	}
}
