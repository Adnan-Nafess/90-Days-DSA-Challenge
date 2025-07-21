// function rotateArray(arr, d, n) {
//     d = d % n;  // Handle cases where d > n

//     let temp = []; // ✅ Corrected: Declare temp as array

//     for (let i = 0; i < d; i++) {
//         temp[i] = arr[i];  // Copy first d elements
//     }

//     for (let i = d; i < n; i++) {
//         arr[i - d] = arr[i];  // Shift remaining elements
//     }

//     for (let i = 0; i < d; i++) {
//         arr[n - d + i] = temp[i];  // Put temp at the end
//     }
// }

// 2nd optimal Approach

function reverseArr(arr) {
    let start = 0;
    let end = arr.length-1;

    while(start <= end) {
        let temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
};

function rotateArray(arr, d, n) {
    // Step 1: Reverse first d elements
    reverseArr(arr, 0, d - 1);

    // Step 2: Reverse the rest
    reverseArr(arr, d, n - 1);

    // Step 3: Reverse the whole array
    reverseArr(arr, 0, n - 1);
}

let arr = [7, 5, 2, 11, 2, 43, 1, 1];
let n = arr.length;
let d = 3;


rotateArray(arr, d, n); // ✅ Pass in correct order

console.log(arr); // 👉 Output: [11, 2, 43, 1, 1, 7, 5, 2]
