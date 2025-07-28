function shiftNegativeOneSide(arr) {
    let j = 0;

    for(let i=0; i<arr.length; i++) {
        if(arr[i] < 0) {
            [arr[i], arr[j]] = [arr[j], arr[i]];
            j++;
        }
    }

    return arr;
}

const arr = [23, -7, 12, -10, -11, 40, 60];

console.log(shiftNegativeOneSide(arr));