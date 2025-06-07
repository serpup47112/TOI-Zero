#include <iostream>
using namespace std;

int main() {
	int n, cal = 0;
	
	while(true) {
		cin >> n;
		if(n == 1) {
			cal += 100;
		}
		if(n == 2) {
			cal += 120;
		}
		if(n == 3) {
			cal += 200;
		}
		if(n == 4) {
			cal += 60;
		}
		if(n == 5) {
			break;
		}
	}
	cout <<"Bye Bye" << endl;
	cout << "Total Calories" << ": " << cal;
}
