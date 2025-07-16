#include <iostream>
#include <string>
using namespace std;

// Function to remove all occurrences of 'part' from 's'
string removeOccurrences(string s, string part) {
    while (s.find(part) != string::npos) {
        s.erase(s.find(part), part.length());
    }
    return s;
}

int main() {
    string s, part;

    cout << "Enter the main string: ";
    cin >> s;

    cout << "Enter the substring to remove: ";
    cin >> part;

    string result = removeOccurrences(s, part);

    cout << "Final string after removing occurrences: " << result << endl;

    return 0;
}
