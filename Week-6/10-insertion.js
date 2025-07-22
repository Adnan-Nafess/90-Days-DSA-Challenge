function findIntersection(arr1, arr2) {
    let i = 0, j = 0;
    let result = [];

    while (i < arr1.length && j < arr2.length) {
        if (arr1[i] === arr2[j]) {
            // To avoid duplicates
            if (result.length === 0 || result[result.length - 1] !== arr1[i]) {
                result.push(arr1[i]);
            }
            i++;
            j++;
        } else if (arr1[i] < arr2[j]) {
            i++;
        } else {
            j++;
        }
    }

    return result;
}

let arr1 = [1, 2, 2, 3, 4, 5];
let arr2 = [2, 2, 3, 5, 6];

let intersection = findIntersection(arr1, arr2);
console.log(intersection);  // Output: [2, 3, 5]

//  Dry Run (Important Lines):

// arr1 = [1, 2, 2, 3, 4, 5]
// arr2 = [2, 2, 3, 5, 6]

// i=0, j=0 ➝ arr1[0]=1 < arr2[0]=2 ➝ i++
// i=1, j=0 ➝ arr1[1]=2 === arr2[0]=2 ➝ push(2), i++, j++
// i=2, j=1 ➝ arr1[2]=2 === arr2[1]=2 ➝ (already added 2) ➝ skip, i++, j++
// i=3, j=2 ➝ arr1[3]=3 === arr2[2]=3 ➝ push(3), i++, j++
// i=4, j=3 ➝ arr1[4]=4 < arr2[3]=5 ➝ i++
// i=5, j=3 ➝ arr1[5]=5 === arr2[3]=5 ➝ push(5), i++, j++
