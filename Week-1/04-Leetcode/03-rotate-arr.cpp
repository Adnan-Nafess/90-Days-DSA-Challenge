#include <iostream>
#include <vector>
using namespace std;


// Rotate an array to the right by k steps
// LeetCode problem no 189

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    vector<int> ans(n);

    for(int i = 0; i < n; i++) {
        int newIndex = (i + k) % n;
        ans[newIndex] = nums[i];
    }

    nums = ans;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    rotate(nums, k);

    cout << "Rotated array: ";
    for(int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
// Output: Rotated array: 5 6 7 1 2 3 4
// Explanation: The array is rotated to the right by 3 positions.       