#include <iostream>
#include <string.h>
using namespace std;

bool checkPalindrome(char ch[], int n) {
    // n -> length of string
    int start = 0;
    int end = n -1;

    while(start <= end) {
        if(ch[start] == ch[end]) {
            start++;
            end--;
        }else {
            return false;
        }
    }

    return true;
}

int main() {
    char ch[100];
    cin.getline(ch, 100);

    int n = strlen(ch);

    cout << checkPalindrome(ch, n);
};