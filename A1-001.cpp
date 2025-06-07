#include<iostream>
#include<string>
using namespace std;

int main() {
	string name, sur;
	cin >> name >> sur;
	cout << "Hello" << " " << name << " " << sur << endl;
	cout << name.substr(0 ,2) << sur.substr(0, 2);
	
	return 0;
}
