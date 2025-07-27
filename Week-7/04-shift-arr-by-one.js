function ShiftArrByOne(arr, n) {
    let temp = arr[n-1];

    for(let i=n-1; i>=1; i--) {
        arr[i] = arr[i-1]
    }

    arr[0] = temp;

    return arr;
}

const arr = [10, 20, 30, 40, 50, 60];
let n = 6;

console.log(ShiftArrByOne(arr, n));