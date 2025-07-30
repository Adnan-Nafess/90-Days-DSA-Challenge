function missingNumber(arr) {
    let start = 0, end = arr.length-1, ans = -1;

    while(start <= end) {
        let mid = Math.floor(start + (end - start) /2);
        let diff = arr[mid] - mid;

        if(diff === 1) {
            start = mid + 1;
        }
        else {
            ans = mid;
            end = mid - 1;
        }
    }

    return ans+1;
};

const arr = [1, 2, 3, 4, 6, 7, 8, 9];

console.log(missingNumber(arr));