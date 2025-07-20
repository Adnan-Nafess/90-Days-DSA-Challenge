function findSecondLargest(arr) {
  if (arr.length < 2) {
    return "Array must have at least two elements";
  }

  let first = -Infinity;
  let second = -Infinity;

  for (let i = 0; i < arr.length; i++) {
    if (arr[i] > first) {
      second = first;
      first = arr[i];
    } else if (arr[i] > second && arr[i] !== first) {
      second = arr[i];
    }
  }

  return second === -Infinity ? "No second largest element" : second;
}


let arr = [10, 20, 5, 8, 20];
console.log(findSecondLargest(arr));