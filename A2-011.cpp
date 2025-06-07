#include <iostream>
using namespace std;

int main() {
    int arr[10];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] >> arr[5] >> arr[6] >> arr[7] >> arr[8] >> arr[9];
    for(int i = 0; i < 10; i++) {
        bool uniqe = true;
        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                uniqe = false;
                break;
            }
        }
        if(uniqe) {
            cout << arr[i] << " ";
        }
    }
}