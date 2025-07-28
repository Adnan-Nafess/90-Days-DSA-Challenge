// Missing Number Leetcode -> 268

function missingNumber(arr) {
    let sum = 0;
    let n = arr.length;


    for(let i=0; i<n; i++) {
        sum += arr[i];
    }

    let totalSum = ((n)*(n+1))/2;
    let ans =  sum - totalSum;

    return ans;
};

const arr = [1, 7, 2, 3, 5, 6, 8];
// const arr = [3, 0, 1];

console.log(missingNumber(arr));