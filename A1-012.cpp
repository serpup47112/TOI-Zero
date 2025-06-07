#include <iostream>
using namespace std;

int main() {
	int a, b = 0, c, r, sum;
	char op;
	cin >> a >> op;
	c = a;
	
	while(a != 0) {
		r = a % 10;
		b = b * 10 + r;
		a = a / 10;
	}
	if(op == '+') {
		sum = c + b;
		cout << c << " " << op << " " << b << " " << "= " << sum; 
	}
	if(op == '-') {
		sum = c - b;
		cout << c << " " << op << " " << b << " " << "= " << sum; 
	}
	if(op == '*') {
		sum = c * b;
		cout << c << " " << op << " " << b << " " << "= " << sum; 
	}
	if(op == '/') {
		sum = c / b;
		cout << c << " " << op << " " << b << " " << "= " << sum; 
	}
}
