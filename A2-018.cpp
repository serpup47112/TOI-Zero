#include <iostream>
using namespace std;

int main() {
    string arr[3] = {"Red", "Green", "Blue"};
    char color;
    int number, loop;
    cin >> color >> number;
    if(color == 'R') {
        loop = 0;
        for (int i = 0; i < number; i++) {
            cout << arr[loop] << " ";
            loop++;
            if(loop > 2) {
                loop = 0;
            }
        }
    }
    if(color == 'G') {
        loop = 1;
        for (int i = 0; i < number; i++) {
            cout << arr[loop] << " ";
            loop++;
            if(loop > 2) {
                loop = 0;
            }
        }
    }
    if(color == 'B') {
        loop = 2;
        for (int i = 0; i < number; i++) {
            cout << arr[loop] << " ";
            loop++;
            if(loop > 2) {
                loop = 0;
            }
        }
    }
}