#include <iostream>
using namespace std;

// Function to perform linear search
bool findTarget(int arr[][4], int row, int col, int target) {

    for(int i=0; i<row; i++) {
        for(int j=0; i<col; j++) {
            if(arr[i][j] == target) {
                return true; // target found
            }
        }
    }

    return false; // target not found

}

int main() {

    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int row = 3, col = 4;
    int target = 11;

    cout << "Found or Not: " << findTarget(arr, row, col, target) << endl;

} 