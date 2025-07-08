#include <iostream>
using namespace std;

int main() {
    // create a 2D array

    // initialize a 2D array with 3 rows and 4 columns
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // print the 2D array
    for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) {
            cout << arr[i][j] << " "; 
        }
        cout << endl; // print a new line after each row
    }

    // input a 2D array from the user
    int userArr[3][4];

    int rows = 3, cols = 4;
    cout << "Enter elements for a 3x4 array:" << endl;

    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> userArr[i][j];
        }
    }
}