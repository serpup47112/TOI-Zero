#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n, score, mx = INT_MIN, a = 0;
    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> score;
        if(score > mx) {
            mx = score;
            a = 1;
        } else if(score == mx) {
            a++;
        }
    }
    cout << mx << endl << a;
}