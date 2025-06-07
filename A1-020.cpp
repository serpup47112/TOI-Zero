#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if(a < b && b < c && a < c) {
		cout << "increasing";
	} else if (a > b && a > c && b > c) {
		cout << "decreasing";
	} else {
		cout << "neither";
	}
}
