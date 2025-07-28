// Sort Color Leetcode no. 75
function sortColor(arr) {
    let start = 0;
    let end = arr.length-1;
    let index = 0;

    while(index <= end) {

        if(arr[index] === 0) {
            [arr[index], arr[start]] = [arr[start], arr[index]];
            start++;
            index++;
        }
        else if(arr[index] === 2) {
            [arr[index], arr[end]] = [arr[end], arr[index]];
            end--; 
        }
        else {
            index++;
        }
    }

    return arr;
};

const arr = [1, 0, 2, 2, 1, 0, 1, 0];

console.log(sortColor(arr));