#include <iostream>
using namespace std;

int main() {
	int y1, m1, d1, y2, m2, d2;
	int chk1, chk2, chk3;
	cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;
	if(y1 < y2 ||(y1 == y2 && m1 < m2) || (y1 == y2 && m1 == m2 && d1 < d2)) {
		cout << "1";
	} else if(y1 == y2 && m1 == m2 && d1 == d2) {
		cout << "0";
	} else {
		cout << "2";
	}
}
