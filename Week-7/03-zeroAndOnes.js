function zeroAndOnes(arr) {
    let start = 0;
    let end = arr.length-1;

    while(start<=end) {
        if(arr[start] === 0) {
            start++
        }else if(arr[end] === 1) {
            end--
        }else {
            [arr[start], arr[end]] = [arr[end], arr[start]];
            start++;
            end--;
        }
    }

    return arr;
}

const arr = [0, 1, 0, 1, 1, 0, 0, 0, 0];

console.log(zeroAndOnes(arr));