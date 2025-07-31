function nearlySorted(arr, n, target) {
    let start = 0;
    let end = n-1;
    
    while(start <= end) {
        let mid = Math.floor(start + (end - start) / 2);

        if(mid-1 >= 0 && arr[mid-1] === target) {
            return mid-1;
        }
        else if(arr[mid] === target) {
            return mid;
        }
        else if(mid+1 < n && arr[mid+1] === target) {
            return mid+1;
        }
        else if(target > arr[mid]) {
            // right
            start = mid + 2;
        }
        else {
            // left
            end = mid - 2;
        }
    } 

    return -1;
};

let arr = [20, 10, 30, 50, 40, 70, 60];
let n = 7;
let target = 30;

let targetIndex = nearlySorted(arr, n, target);

if(targetIndex === -1) {
    console.log("target not found");
}else {
    console.log("target found at index: ", targetIndex);
};