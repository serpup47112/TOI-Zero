#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, a=0;
    string s1, s2;
    cin >> n;
    cin >> s1 >> s2;
    for(int i=0; i<n; i++) {
        if((s1[i] - '0') + (s2[i] - '0') != 9) {
            a++;
        }
    }
    if(a == 0) {
        cout << "YES";
    } else {
        cout << "NO " << a;
    }
}