function largestArray (arr) {
    // strore 0 index value to suppose 1st value is largest value
    let largest = arr[0];

    for(let i=0; i<arr.length; i++) {
        // for travesal full array check largest value to one by one
        if(arr[i] > largest) {
            // array value store largest variable
            largest = arr[i];
        }
    }

    return largest;
};

let arr = [3, 6, 1, 5, 7];

console.log(largestArray(arr));