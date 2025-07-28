// Rotate Array Leetcode no -> 189

function rotate(nums, k) {
    const n = nums.length;
    k = k % n;                  // In case k > n
    const ans = new Array(n);

    for (let i = 0; i < n; i++) {
        let newIndex = (i + k) % n;
        ans[newIndex] = nums[i];
    }

    for (let i = 0; i < n; i++) {
        nums[i] = ans[i];       // Copy result back to original array
    }

    return nums;
}


const nums = [1,2,3,4,5,6,7], k = 3;

console.log(rotate(nums, k));
