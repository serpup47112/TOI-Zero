#include <iostream>
using namespace std;

int main() {
	int num;
	char name;
	cin >> num >> name;
	if (num <= 18  ||  name == 's' || name == 'S' ) {
		cout << "20";
	} else {
		cout << "50";
	}
}
