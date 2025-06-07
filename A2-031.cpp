#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char g1[n], g2[n];

    for(int i = 0; i<n; i++) {
        cin >> g1[i];
    }
    for(int i = 0; i<n; i++) {
        cin >> g2[i];
    }

    int m;
    cin >> m;
    for(int i =0; i<m; i++) {
        int genech, choch;
        char c;
        cin >> genech >> choch >> c;
        if(genech == 1) {
            g1[choch] = c;
        } else {
            g2[choch] = c;
        }
    }

    for(int i = 0; i<n; i++) {
        cout << g1[i] << " ";
        if(i == n-1) {
            cout << endl;
            break;
        }
    }
    for(int i = 0; i<n; i++) {
        cout << g2[i] << " ";
        if(i == n-1) {
            cout << endl;
            break;
        }
    }
    int chk = 0;
    for(int i = 0; i<n; i++) {
        if(g1[i] == 'A' && g2[i] != 'T') {
            chk += 1;
        }
        if(g1[i] == 'T' && g2[i] != 'A') {
            chk += 1;
        }
        if(g1[i] == 'C' && g2[i] != 'G') {
            chk += 1;
        }
        if(g1[i] == 'G' && g2[i] != 'C') {
            chk += 1;
        }
    }
    cout << chk;
}