#include <iostream>
using namespace std;

int main() {
    int money, n10 = 0, n5 = 0, n2 = 0, n1 = 0;
    cin >> money;
    while(money != 0) {
    	if (money >= 10) {
    		money -= 10;
    		n10 += 1;
		} else if (money >= 5) {
			money -= 5;
			n5 += 1;
		} else if (money >= 2) {
			money -= 2;
			n2 += 1;
		} else if(money >= 1){
			money -= 1;
			n1 += 1;
		}
	}
	
	cout << "10 = " << n10 << endl;
	cout << "5 = " << n5 << endl;
	cout << "2 = " << n2 << endl;
	cout << "1 = " << n1;
	
	return 0;
}
