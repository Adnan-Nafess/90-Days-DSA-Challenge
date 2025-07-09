#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int sum = 0;
    
    for(int i=0; i<n; i++) {
        sum += nums[i];
    };

    // The expected sum of the first n natural numbers is given by the formula n*(n+1)/2
    int expectedSum = n * (n + 1) / 2;
    int missingNum = expectedSum - sum;
    return missingNum;
}

int main() {
vector<int> nums = {9,6,4,2,3,5,7,0,1};

    missingNumber(nums);

    cout << "Missing number: " << missingNumber(nums) << endl;

    return 0;
};