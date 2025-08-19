const findMaxConsecutiveOnes = (nums) => {
  let maxCount = 0; // Holds the maximum streak
  let currentCount = 0; // Counts current consecutive 1s

  for (let i = 0; i < nums.length; i++) {
    if (nums[i] === 1) {
      currentCount++;
      maxCount = Math.max(maxCount, currentCount);
    } else {
      currentCount = 0; // Reset count when 0 is encountered
    }
  }

  return maxCount;
};

// Example usage:
const nums = [1, 1, 0, 1, 1, 1];
console.log(findMaxConsecutiveOnes(nums)); // Output: 3