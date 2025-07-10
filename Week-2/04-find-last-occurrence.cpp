#include <iostream>
using namespace std;

// Function to find the missing number in an array of size n
int findLastOccurrence(int arr[], int n, int target) {
    int start = 0;
    int end = n - 1;
    int ans = -1; // Default answer if not found

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            ans = mid; // Store the index of the last occurrence
            start = mid + 1; // Move to the right side to find the last occurrence
        } else if (target > arr[mid]) {
            start = mid + 1; // Target is in the right half
        } else {
            end = mid - 1; // Target is in the left half
        }
    }

    return ans; // Return the index of the last occurrence or -1 if not found
};


int main() {
    int arr[] = {1, 2, 2, 2, 2, 2, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 2;

    int ansIndex = findLastOccurrence(arr, n, target);

    if (ansIndex != -1) {
        cout << "Last occurrence of element " << target << " is at index: " << ansIndex << endl;
    } else {
        cout << "Element " << target << " not found in the array." << endl;
    };

    return 0;
};  