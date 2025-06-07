#include <iostream>
using namespace std;

int main() {
    int carrot, ka, tomato, sum1, sum2, sum3, sum;
    cin >> carrot >> ka >> tomato;
    sum1 = carrot * 10;
    sum2 = ka * 25;
    sum3 = tomato * 3;
    sum = sum1 + sum2 + sum3;
    cout << sum;
}