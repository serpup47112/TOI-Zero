#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n, weight, a = 0, mx = INT_MIN;
    string name, mxn;
    cin >> n;

    for(int i = 0; i<n; i++) {
        cin >> name >> weight;
        if(weight > mx) {
            mx = weight;
            mxn = name;
        }
        if(weight > 15) {
            a++;
        }
    }
    cout << a << endl;
    cout << mxn << " " << mx;
}