#include<iostream>
#include<string>
using namespace std;

int main() {
	char c = 'l', c1 = 'L';
	string str;
	cin >> str;
	size_t n = str.find(c || c1);
	if (n != string::npos) {
        cout << "Found" << endl;
    } else {
        cout << "Not found" << endl;
    }
	/*string name, sur;
	cin >> name >> sur;
	cout << "Hello" << " " << name << " " << sur << endl;
	cout << name.substr(0 ,2) << sur.substr(0, 2);
	
	return 0;*/
}
