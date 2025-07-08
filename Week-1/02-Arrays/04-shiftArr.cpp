#include <iostream>
using namespace std;

void shiftArr(int arr[], int n) {
    // step 1: Store the first element
    int temp = arr[n-1];

    // step 2: Shift all elements to the right
    for(int i=n-1; i>=1; i--) {
        arr[i] = arr[i-1];
    }

    // step 3: Place the stored element at the first position
    arr[0] = temp;
}

int main() {

    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    shiftArr(arr, n);

    // Print the shifted array
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}