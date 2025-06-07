#include <iostream>
using namespace std;

int main() {
    char size, type, topping;
    int price = 0, amount;
    cin >> size >> type >> topping;
    if(topping != 'N') {
        cin >> amount;
    } 
    if(size == 'S') {
        if(type == 'R') {
            price += 60;
        }
        else if(type == 'T') {
            price += 80;
        }
    }
    if(size == 'M') {
        if(type == 'R') {
            price += 80;
        }
        else if(type == 'T') {
            price += 100;
        }
    }
    if(size == 'L') {
        if(type == 'R') {
            price += 100;
        }
        else if(type == 'T') {
            price += 120;
        }
    }
    if(topping == 'N') {
        cout << price;
    } else if(topping == 'P') {
        price = price + (amount * 15);
        cout << price;
    } else if(topping == 'E') {
        price = price + (amount * 10);
        cout << price;
    }
    
}