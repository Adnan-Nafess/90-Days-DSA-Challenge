#include <iostream>
#include <vector>
using namespace std;

// Function to find the peak index in a mountain array
int peakIndexInMountainArray(vector<int>& arr) {
    int n = arr.size();
    int s = 0;
    int e = n - 1;

    while(s < e) {
        int mid = s + (e - s) / 2;
        if(arr[mid] < arr[mid + 1]) {
            s = mid + 1;
        } else {
            e = mid;
        }
    }

    return s;
}

int main() {
    vector<int> arr = {1, 3, 5, 6, 4, 2};  // Example mountain array

    int peak = peakIndexInMountainArray(arr);

    cout << "Peak index in mountain array is: " << peak << endl;

    return 0;
}
