function removeDuplicate(arr) {
    if (arr.length === 0) return 0;

    let i = 0;

    for (let j = 1; j < arr.length; j++) {
        if (arr[j] !== arr[i]) {
            i++;
            arr[i] = arr[j];
        }
    }

    return i + 1; // length of array with unique elements
}

// leetcode problem no 26


let arr = [1, 1, 2, 2, 3, 3, 3];
let length = removeDuplicate(arr);

console.log("Length:", length); // Output: 3
console.log("Unique values:", arr.slice(0, length)); // Output: [1, 2, 3]
