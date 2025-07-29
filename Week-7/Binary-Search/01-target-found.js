function binarySearch(arr, target) {
    let start = 0;
    let end = arr.length-1;

    while(start <= end) {
        let mid = Math.floor(start + (end - start) / 2);

        if(arr[mid] === target) {
            return mid;
        }
        else if(target > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }

    }

    return -1;  // Not found
};

const arr = [10, 20, 30, 40, 50, 60, 70, 80, 90];
const target = 60;

const ans = binarySearch(arr, target);

if(ans === -1) {
    console.log("Target Not Found");
}else {
    console.log("Target Found at index: ", ans);
}