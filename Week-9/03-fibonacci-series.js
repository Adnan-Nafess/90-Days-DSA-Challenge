function fibonacciSeries(n) {
    // base case 
    if (n === 0) {
        return 0;
    }
    if (n === 1) {
        return 1;
    }

    let ans = fibonacciSeries(n-1) + fibonacciSeries(n-2)
    return ans;
};

console.log(fibonacciSeries(9));