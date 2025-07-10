#include <iostream>
using namespace std;

// Function to find the missing number in a 1-based sorted array
int findMissingNumber(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    int ans = n + 1; // By default, if last is missing

    while(start <= end) {
        int mid = start + (end - start) / 2;

        // Adjusted for 1-based array
        if(arr[mid] == mid + 1) {
            start = mid + 1;
        } else {
            ans = mid + 1;
            end = mid - 1;
        }
    }

    return ans;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8,}; // Missing 8
    int n = sizeof(arr) / sizeof(arr[0]);

    int missing = findMissingNumber(arr, n);
    cout << "The missing number is: " << missing << endl;

    return 0;
}
