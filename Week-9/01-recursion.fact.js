function factorial(n) {
    // base case
    if(n === 1) {
        return 1;
    }
    if(n === 0) {
        return 1;
    }

    // Recursive Relation
    let recursive = factorial(n-1);

    // Processing
    let finalAns = n * recursive;

    return finalAns;
};

console.log(factorial(5));