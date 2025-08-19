function sumOfN(n) {
    // Base case
    if (n === 1) {
        return 1;
    }

    let ans = n + sumOfN(n-1);

    return ans;
};

console.log(sumOfN(5));