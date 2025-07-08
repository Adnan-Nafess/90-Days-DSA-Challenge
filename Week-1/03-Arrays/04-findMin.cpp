#include <iostream>
#include <limits.h>
using namespace std;

// Find Min element in a 2D array
int findMin(int arr[][4], int row, int col) {

    int minAns = INT_MAX;

    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            // Check if the current element is less than maxAns
            // If it is, update minAns
            if(arr[i][j] < minAns) {
                minAns = arr[i][j]; 
            }
        }
    }

    return minAns;

}

int main() {

    int arr[3][4] = {
        {11, 22, 3, 4},
        {5, 60, 1, 8},
        {9, 10, 11, 12}
    };

    int row = 3, col = 4;

    cout << "Printing the max No. : " << findMin(arr, row, col) << endl;

} 