#include <iostream>
using namespace std;

int main() {
    int l, n, sum = 0, chk1 = 0, chk2 = 0;
    cin >> l >> n;

    int layer = l;

    for(int i = 1; i<= l; i++) {
        int ol = i * i;
        if(n >= ol) {
            n = n - ol;
            layer -= 1;
        }
    }

    cout << layer;
}