#include <iostream>
using namespace std;

int main() {
  int n1, n2, n3;
  cin >> n1 >> n2 >> n3;
  bool result1 = (n1 >= 5);
  bool result2 = (n2 >= 20);
  bool result3 = (n3 >= 25);
  if(result1 && result2 && result3) {
  	cout << "pass";
  } else {
  	cout << "fail";
  }
  return 0;
}
