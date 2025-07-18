#include <iostream>
#include <vector>
using namespace std;

void segrate0and1(int arr[], int n) {
    int start = 0, end = n-1;

    while(start <= end) {
        // zero equal to
        if(arr[start] == 0) {
            start++;
        }else {
            if(arr[end] == 0) {
                swap(arr[start], arr[end]);
                start++;
                end--;
            }else {
                end--;
            }
        }
    }
}


int main() {
    int arr[] = {1, 0, 0, 1, 0, 1, 0};
    int n = 7;

    segrate0and1(arr, n);

    for(int i=0; i<n; i++) {
        cout << " " << arr[i];
    }
}