#include <iostream>
using namespace std;

// Function to find the first occurrence of a target in a sorted array
int findFirstOccurrence(int arr[], int n, int target) {
    int start = 0;
    int end = n-1;
    
    // Best practice: calculate mid after start and end are initialized
    int mid = start + (end + start) / 2;
    int ans = -1;

    while(start <= end) {
        if(arr[mid] == target) {
            // ans store
            ans = mid;
            // move to the left side to find the first occurrence
            end = mid -1;
        }
        else if(target > arr[mid]) {
            // target is in the right half
            start = mid + 1;
        }
        else {
            // target is in the left half
            end = mid - 1;
        }
        // recalculate mid
        mid = (start + end) / 2;
    }

    return ans; // return the index of the first occurrence or -1 if not found
};

int main() {
    int arr[] = {1, 2, 2, 2, 2, 2, 7, 8, 9};
    int n = 9;
    int target = 2;

    int ansIndex = findFirstOccurrence(arr, n, target);

    if(ansIndex != -1) {
        cout << "First occurrence of element " << target << " is at index: " << ansIndex << endl;
    } else {
        cout << "Element " << target << " not found in the array." << endl;
    };

    return 0;
    
};