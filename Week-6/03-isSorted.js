function isSorted(nums) {
    let count = 0;
    let n = nums.length;

    for (let i = 0; i < n; i++) {
        let next = (i + 1) % n;
        if (nums[i] > nums[next]) {
            count++;
        }
    }

    return count <= 1;
};

// Leetcode Problem no. 1252


let arr = [1, 2, 2, 3, 3, 4];
console.log(isSorted(arr));