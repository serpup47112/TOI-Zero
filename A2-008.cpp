#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, p, count = 0, mx = 0;
    cin >> n;
    pair<int, int> v[n];


    for(int i = 0; i<n; i++) {
        cin >> v[i].first >> v[i].second;
    }

    if(n <= 1) {
        cout << 0;
        return 0;
    }

    sort(v, v+n);
    
    int last = v[n-1].second;
    for(int i = 0; i<n-1; i++) {
        if(v[i].second < mx) {
            count++;
        } else {
            mx = max(mx, v[i].second);
        }
        
    }

    cout << count;
}