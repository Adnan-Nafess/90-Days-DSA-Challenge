#include <iostream>
#include <limits.h>
using namespace std;

// print row wise sum of a 2D array
void rowWiseSum(int arr[][4], int row, int col) {

    for(int i=0; i<row; i++) {
        int sum = 0;
        for(int j=0; j<col; j++) {
            sum += arr[i][j];
        }

        cout << "Print the sum of 2d array row wise: " << sum << endl;
    }

}

int main() {

    int arr[3][4] = {
        {11, 22, 3, 4},
        {5, 60, 1, 8},
        {9, 10, 11, 12}
    };

    int row = 3, col = 4;

    rowWiseSum(arr, row, col);

} 