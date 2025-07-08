#include <iostream>
using namespace std;

// Transpose of a 2D array
void transpose(int arr[][4], int row, int col) {

    for(int i=0; i<row; i++) {
        for(int j=i+1; j<col; j++) {
            // Print the transpose element
            swap(arr[i][j], arr[j][i]);
        }
    }
}

void printArray(int arr[][4], int row, int col) {
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {

    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
    };

    int row = 4, col = 4;

    cout << "Original Matrix:" << endl;
    printArray(arr, row, col);

    transpose(arr, row, col);

    cout << "\nTransposed Matrix:" << endl;
    printArray(arr, row, col);

    return 0;  

}