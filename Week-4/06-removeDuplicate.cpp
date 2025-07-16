#include <iostream>
#include <string>
using namespace std;

// Function to remove adjacent duplicates
string removeDuplicates(string s) {
    string ans = "";
    int index = 0;

    while (index < s.length()) {
        if (!ans.empty() && ans.back() == s[index]) {
            ans.pop_back();  // remove last character if same
        } else {
            ans.push_back(s[index]);  // add character
        }
        index++;
    }

    return ans;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    string result = removeDuplicates(input);

    cout << "After removing duplicates: " << result << endl;

    return 0;
}
