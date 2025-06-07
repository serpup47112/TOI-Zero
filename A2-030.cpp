#include <iostream>
using namespace std;

int main() {
    int arr[5][5];
    int row, col, oddrow = -1, oddcol = -1;
    for(int i = 0; i<5; i++) {
        for(int j = 0; j<5; j++) {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i<5; i++) {
        int rowsum = 0, colsum = 0;
        for(int j = 0; j<5; j++) {
            rowsum += arr[i][j];
            colsum += arr[j][i];
        }
        if(rowsum % 2 != 0) {
            oddrow = i;
        }

        if(colsum % 2 != 0) {
            oddcol = i;
        }
    }
    cout << oddrow << " " << oddcol;
}      