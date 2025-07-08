#include <iostream>
#include <limits.h>
using namespace std;

// Find Max element in a 2D array
int findMax(int arr[][4], int row, int col) {

    int maxAns = INT_MIN;

    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            // Check if the current element is greater than maxAns
            // If it is, update maxAns
            if(arr[i][j] > maxAns) {
                maxAns = arr[i][j]; 
            }
        }
    }

    return maxAns;

}

int main() {

    int arr[3][4] = {
        {1, 22, 3, 4},
        {5, 60, 77, 8},
        {9, 10, 11, 12}
    };

    int row = 3, col = 4;

    cout << "Printing the max No. : " << findMax(arr, row, col) << endl;

} 