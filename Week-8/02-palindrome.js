function checkPalindrome(str, n) {
    let start = 0;
    let end = n-1;

    while(start <= end) {
        if(str[start] === str[end]) {
            start++
            end--;
        }
        else {
            return false
        }
    }

    return true;
};

let str = "racecar";   // => Valid Palindrome
// let str = "adnan";  //  => Not palindrme
let n = str.length;

let isPalindrome = checkPalindrome(str, n);

if(isPalindrome) {
    console.log("valid Palindrome");
}else {
    console.log("not Palindrome");
}