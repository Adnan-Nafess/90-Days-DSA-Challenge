#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";
        int index = 0;

        while (index < s.length()) {
            if (!ans.empty() && ans.back() == s[index]) {
                ans.pop_back(); // Remove last character
            } else {
                ans.push_back(s[index]); // Add current character
            }
            index++;
        }

        return ans;
    }
};

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    Solution obj;
    string result = obj.removeDuplicates(input);
    
    cout << "After removing duplicates: " << result << endl;

    return 0;
}
