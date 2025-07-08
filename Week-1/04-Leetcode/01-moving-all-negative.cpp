#include <iostream>
using namespace std;

// Function to shift all negative numbers to the left side of the array
void shiftNegativeOneSide(int arr[], int n) {
    int j = 0; // Pointer for the position of the next negative number

    for(int i=0; i<n; i++) {
        if(arr[i] < 0) { // Check if the current number is negative
            // If it is negative, swap it with the number at position j
            swap(arr[i], arr[j]); // Swap the current negative number with the next position for negative numbers
            j++; // Move the pointer to the next position for negative numbers
        }
    }
}

int main() {

    int arr[] = {23, -7, 12, -10, -11, 40, 60};
    int n = 7;

    shiftNegativeOneSide(arr, n);

    // print the modified array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}