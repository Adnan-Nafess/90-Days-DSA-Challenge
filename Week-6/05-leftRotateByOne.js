function leftRotateByOne(arr) {
    let n = arr.length;
    let temp = arr[0]; // Step 1: Store first element

    for (let i = 1; i < n; i++) {
        arr[i - 1] = arr[i]; // Step 2: Shift elements to the left
    }

    arr[n - 1] = temp; // Step 3: Put the first element at the end
}

let arr = [1, 2, 3, 4, 5];
leftRotateByOne(arr);

console.log(arr); // Output: [2, 3, 4, 5, 1]
