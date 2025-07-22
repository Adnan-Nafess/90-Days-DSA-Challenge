function findMissingNumber(arr, n) {
  let xor1 = 0;
  let xor2 = 0;

  // XOR all array elements
  for (let i = 0; i < n - 1; i++) {
    xor1 ^= arr[i];
  }

  // XOR all numbers from 1 to n
  for (let i = 1; i <= n; i++) {
    xor2 ^= i;
  }

  // Missing number is xor1 ^ xor2
  return xor1 ^ xor2;
}

const arr = [1, 2, 4, 5, 6];  // missing 3
const n = 6;
console.log(findMissingNumber(arr, n)); // Output: 3
