#include <iostream>
using namespace std;

void sortZeroOne(int arr[], int n) {
    int zeroCount = 0;
    int oneCount = 0;

    // step 1: Count the number of 0s and 1s
    for(int i=0; i<n; i++) {
        if(arr[i] == 0) {
            zeroCount++;
        }if(arr[i] == 1) {
            oneCount++;
        }
    }

    // Step 2: place all zeros first

    int index = 0;

    while(zeroCount--) {
        arr[index] = 0;
        index++;
    }

    while(oneCount--) {
        arr[index] = 1;
        index++;
    }
};

int main() {
    int arr[] = {0, 1, 0, 1, 0, 1, 0, 0, 0, 1};
    int n = 10; 

    sortZeroOne(arr, n);

    // Print the sorted array
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    };

    return 0;
}