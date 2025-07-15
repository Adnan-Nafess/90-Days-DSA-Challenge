#include <iostream>
#include <string.h>
using namespace std;

void reverseStr(char ch[], int n){
    int start = 0;
    int end = n-1;

    while(start <= end) {
        int temp = ch[start];
        ch[start] = ch[end];
        ch[end] = temp;

        start++;
        end--;
    }
}

int main() {

    char ch[10];
    cin >> ch;

    int n = strlen(ch);

    reverseStr(ch, n);
    cout<<ch<<endl;
}