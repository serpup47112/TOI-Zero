#include <iostream>
#include <string>
using namespace std;

int main() {
    char p, yp; // ตัวหน้า(ตัวอักษร)  p = ผลรางวัล , yp  = สลากของเรา
    string l, yl;  // ตัวหลัง(ตัวเลข) l = ผลรางวัล , yl = สลากของเรา

    cin >> p >> l >> yp >> yl;

    if(p == yp && l == yl) {
        cout << "1000000";
    } else if(p != yp && l == yl) {
        cout << "100000";
    } else if(p == yp && l.substr(2) == yl.substr(2)) {    
        cout << "2000";
    }else if(p == yp && l.substr(3) == yl.substr(3)) {
        cout << "1000";
    } else if(p != yp && l.substr(2) == yl.substr(2)) {
        cout << "200";
    } else if(p != yp && l.substr(3) == yl.substr(3)) {
        cout << "100";
    } else if(p == yp && l != yl) {
        cout << "20";
    } else {
        cout << "0";
    }
}