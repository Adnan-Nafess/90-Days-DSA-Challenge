// Leetcode Problem no 1108

function defangIPAddress (address) {
    let ans = "";
    let index = 0;

    while(index < address.length) {
        if(address[index] === ".") {
            ans += "[.]";
        }
        else {
            ans += address[index];
        }

        index++
    }

    return ans;
};

let address = "1.1.1.1";

console.log(defangIPAddress(address));