function unionSortedArrays(arr1, arr2) {
    let i = 0, j = 0;
    let n = arr1.length, m = arr2.length;
    let union = [];

    while (i < n && j < m) {
        // Skip duplicates in arr1
        while (i > 0 && i < n && arr1[i] === arr1[i - 1]) i++;
        // Skip duplicates in arr2
        while (j > 0 && j < m && arr2[j] === arr2[j - 1]) j++;

        if (i >= n || j >= m) break;

        if (arr1[i] < arr2[j]) {
            union.push(arr1[i]);
            i++;
        } else if (arr1[i] > arr2[j]) {
            union.push(arr2[j]);
            j++;
        } else {
            // Same element in both
            union.push(arr1[i]);
            i++;
            j++;
        }
    }

    // Remaining elements in arr1
    while (i < n) {
        if (i === 0 || arr1[i] !== arr1[i - 1])
            union.push(arr1[i]);
        i++;
    }

    // Remaining elements in arr2
    while (j < m) {
        if (j === 0 || arr2[j] !== arr2[j - 1])
            union.push(arr2[j]);
        j++;
    }

    return union;
}


let arr1 = [1, 2, 2, 3, 4];
let arr2 = [2, 2, 3, 5, 6];

console.log(unionSortedArrays(arr1, arr2)); 
// Output: [1, 2, 3, 4, 5, 6]
