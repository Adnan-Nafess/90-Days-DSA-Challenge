function peakElement(arr) {
    let start = 0, end = arr.length-1;

    while (start < end) {
        let mid = Math.floor(start + (end - start) /2);

        if(arr[mid] < arr[mid+1]) {
            // A wali line me hu
            // Peak right me exist krti h
            start = mid + 1;
        }
        else {
            // yaa to main B line pr hu
            // yaa to main Peak Element pr hu
            end = mid;
        }
    }

    return start;
}

const arr = [10, 20, 50, 40, 30];

console.log(peakElement(arr));