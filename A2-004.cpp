#include<iostream>
using namespace std;

int main() {
    int n, dish[300] = {0}, mx=0;
    cin >> n;

    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        dish[x] += 1;
        if(dish[x] > mx) {
            mx = dish[x];
        }
    }
    cout << mx;
}