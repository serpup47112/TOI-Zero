#include <iostream>
using namespace std;

int main() {
    char boba, tea;
    int gram, sweet, cc, cal1, cal2;
    cin >> boba >> gram >> tea >> sweet >> cc;

    if(boba == 'H') {
        cal1 = gram * 5;
    }
    if(boba == 'O') {
        cal1 = gram * 3;
    }
    if(boba == 'J') {
        cal1 = gram * 2;
    }
    
    if(tea == 'R') {
        if(sweet == 1) {
            cal2 = cc * 12;
        }
        if(sweet == 2) {
            cal2 = cc * 18;
        }
        if(sweet == 3) {
            cal2 = cc * 25;
        }
    }
    if(tea == 'T') {
        if(sweet == 1) {
            cal2 = cc * 15;
        }
        if(sweet == 2) {
            cal2 = cc * 20;
        }
        if(sweet == 3) {
            cal2 = cc * 30;
        }
    }
    if(tea == 'M') {
        if(sweet == 1) {
            cal2 = cc * 10;
        }
        if(sweet == 2) {
            cal2 = cc * 15;
        }
        if(sweet == 3) {
            cal2 = cc * 20;
        }
    }
    int sum = cal1 + cal2;
    cout << sum;
}