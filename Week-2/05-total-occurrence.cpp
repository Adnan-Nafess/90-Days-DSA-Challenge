#include <iostream>
using namespace std;   

// Function to find the total occurrences of a target in a sorted array
int totalOccurrences(int arr[], int n, int target) {
    int start = 0;
    int end = n - 1;
    int firstOccurrence = -1;
    int lastOccurrence = -1;

    // Find the first occurrence
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            firstOccurrence = mid; // Store the index of the first occurrence
            end = mid - 1; // Move to the left side to find the first occurrence
        } else if (target > arr[mid]) {
            start = mid + 1; // Target is in the right half
        } else {
            end = mid - 1; // Target is in the left half
        }
    }

    // Reset start and end for finding last occurrence
    start = 0;
    end = n - 1;

    // Find the last occurrence
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            lastOccurrence = mid; // Store the index of the last occurrence
            start = mid + 1; // Move to the right side to find the last occurrence
        } else if (target > arr[mid]) {
            start = mid + 1; // Target is in the right half
        } else {
            end = mid - 1; // Target is in the left half
        }
    }

    // If target was not found, return 0
    if (firstOccurrence == -1 || lastOccurrence == -1) {
        return 0;
    }

    return lastOccurrence - firstOccurrence + 1; // Total occurrences
};

int main() {
    int arr[] = {1, 2, 2, 2, 2, 2, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 2;

    int occurrences = totalOccurrences(arr, n, target);

    if (occurrences > 0) {
        cout << "Total occurrences of element " << target << " is: " << occurrences << endl;
    } else {
        cout << "Element " << target << " not found in the array." << endl;
    }

    return 0;
}