#include <iostream>
using namespace std;

// leetcode problem no 35 

int searchInsertPosition(int arr[], int target, int n) {
    int start = 0, end = n-1, ans = n;

    while(start <= end)
    {
        // mid
        int mid = start + (end - start) /2;

        if(arr[mid] == target)
        {
            ans = mid;
            break;
        }
        else if(arr[mid] < target) 
        {
            start = mid+1;
        }
        else
        {
            ans = mid;
            end = mid -1;
        }
    }

    return ans;
}

int main() {
    int arr[] = {1, 4, 6, 8, 10, 14, 16, 18};
    int n = 8;
    int target = 15;

    int ans = searchInsertPosition(arr, target, n);

    cout << ans;
}