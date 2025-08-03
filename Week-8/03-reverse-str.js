function reverseStr(str, n) {
    // Convert string to array
    let arr = [];
    for (let i = 0; i < n; i++) {
        arr.push(str[i]);
    }

    // 2-pointer reversal
    let start = 0;
    let end = n - 1;

    while (start <= end) {
        let temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    // Convert array back to string
    let reversed = "";
    for (let i = 0; i < n; i++) {
        reversed += arr[i];
    }

    return reversed;
}

let str = "addu";
let n = str.length;

console.log(reverseStr(str, n));
