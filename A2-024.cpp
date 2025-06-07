#include <iostream>
using namespace std;

int main() {
    int l, p, mx = 0;
    int a[3], count[3] = {0}, pos, point;
    string s[3] = {"Rabbit", "Monkey", "Frog"};
    
    cin >> l >> p;

    for(int i = 0; i<3; i++) {
        cin >> a[i];
    }

    for(int i = 0; i<p; i++) {
        cin >> pos >> point;
        for(int j = 0; j<3; j++) {
            if(pos % a[j] == 0) {
                count[j] += point;
            }
        }
    }
    
    for(int i = 0; i<3; i++) {
        if(count[i] > mx) {
            mx = count[i];
        }
    }

    for(int i = 0; i<3; i++) {
        if(count[i] == mx) {
            cout << s[i] << " " << count[i] << endl;
        }
    }
}