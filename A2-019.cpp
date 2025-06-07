#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string a;
    int max = 0, posb;
    bool buu = false;
    cin >> a;
    int x = a.length();
    for(int i=0 ; i<x; i++) {
        if(toupper(a[i]) == 'B') {
            int count = 0;
            int j = i + 1;

            while(j < x && toupper(a[j]) == 'U') { // หา U
                count += 1;
                j += 1;
            }

            if(count >= 2) {
                buu = true;
                if(count > max) {
                    max = count;
                }
            }
        }
    }

    if(buu == true) {
        cout << "Yes " << max;
    } else {
        posb = -1;
    
        for(int i=0; i<x; i++) {
            if(toupper(a[i]) == 'B') {
                posb = i;
                break;
            }
        }

        if(posb != -1) {
            for(int i=posb+1; i<x; i++) {
                a[i] = 'U';
                for(int i = 0; i<x; i++) {
                    a[i] = toupper(a[i]);
                }
            }
            cout << a;
        } else {
            string b = "BUU";
            string result = "";

            for(int i = 0; i<x; i++) {
                result += "BUU"[i % 3];
            }
            cout << result;
        }
    }
}