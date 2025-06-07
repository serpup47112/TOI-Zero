#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char num[15] = {};
	cin >> num;
	
	if(strlen(num) == 13) {
		cout << "yes";
	} else {
		cout << "no";
	}

    return 0;
}
