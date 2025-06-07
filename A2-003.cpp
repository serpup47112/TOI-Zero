#include <iostream>
using namespace std;

int main() {
    int n, t[1000];
    int tree = 0;
    cin >> n;

    for(int i = 0; i<n; i++) {
        cin >> t[i];
    }


    if(n>1) { // check first tree
        if(t[0] > t[1]) {
            tree += 1;
        }
    }
    
    if(n>1) { // check last tree
        if(t[n-1] > t[n-2]) {
            tree +=1;
        }
    }

    for(int i = 1; i<n-1; i++) {
        if(t[i] > t[i-1] && t[i] > t[i+1]) {
            tree += 1;
        }
    }

    cout << tree;
}