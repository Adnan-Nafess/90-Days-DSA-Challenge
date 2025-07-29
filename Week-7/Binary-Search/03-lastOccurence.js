function lastOccurence(arr, target) {
    let start = 0;
    let end = arr.length-1;
    let ans = -1;

    while(start <= end) {
        // mid
        let mid = Math.floor(start + (end - start) / 2);

        if(arr[mid] === target) {
            ans = mid;
            start = mid + 1;
        }
        else if(target < arr[mid]) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }

    return ans;
};

const arr = [10, 20, 30, 30, 30, 60, 70];
const target = 30;

const ans = lastOccurence(arr, target);

if(ans === -1) {
    console.log("Target not found");
}else {
    console.log("Last Occurence number at: ", ans);
}