#include <iostream>
using namespace std;

int main() {
	int n, sum;
	cin >> n;
	for(int i=0; i<n; i++) {
		n *= n;
		n -= 1;
	}
		cout << n;
}
