function findUnique(arr) {
  let unique = 0;
  for (let num of arr) {
    unique ^= num; // XOR operation
  }
  return unique;
}

// Test
const arr = [2, 3, 5, 4, 5, 3, 4];
console.log(findUnique(arr)); // Output: 2
