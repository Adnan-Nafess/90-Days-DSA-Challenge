#include <iostream>
using namespace std;


// Function to perform binary search
int binarySearch(int arr[], int n, int target) {
    int start = 0;
    int end = n-1;

    int mid = (start + end) / 2;

    while(start <=  end) {
        // found
        if(arr[mid] == target) {
            // return index of the found element
            return mid;
        }
        else if(arr[mid] < target) {
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

    // target not found
    return -1;
};

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = 5;
    int target = 11;

    int ansIndex = binarySearch(arr, n, target);

    if(ansIndex != -1) {
        cout << "Element found at index: " << ansIndex << endl;
    } else {
        cout << "Element not found in th array." << endl;
    }

}