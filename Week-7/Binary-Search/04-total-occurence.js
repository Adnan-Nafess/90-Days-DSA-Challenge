function firstOccurrence(arr, target) {
  let start = 0;
  let end = arr.length - 1;
  let result = -1;

  while (start <= end) {
    let mid = Math.floor(start + (end - start) / 2);

    if (arr[mid] === target) {
      result = mid;       // possible answer mila
      end = mid - 1;       // left me aur check karo
    } else if (target < arr[mid]) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }

  return result;
}

function lastOccurrence(arr, target) {
  let start = 0;
  let end = arr.length - 1;
  let result = -1;

  while (start <= end) {
    let mid = Math.floor(start + (end - start) / 2);

    if (arr[mid] === target) {
      result = mid;       // possible answer mila
      start = mid + 1;     // right me aur check karo
    } else if (target < arr[mid]) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }

  return result;
}

function totalOccurrences(arr, target) {
  let first = firstOccurrence(arr, target);
  let last = lastOccurrence(arr, target);

  if (first === -1) return 0;

  return (last - first + 1);
}


let arr = [1, 2, 2, 2, 3, 4, 5];
let target = 2;

console.log(totalOccurrences(arr, target));  // Output: 3
