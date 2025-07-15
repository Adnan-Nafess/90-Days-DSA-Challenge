#include <iostream>
#include <string.h>
using namespace std;

int findLength(char ch[], int size) {
    int length = 0;

    for(int i=0; i<size; i++) {
        if(ch[i] == '\0') {
            // ruk jao
            break;
        }else {
            length++;
        }
    }

    return length;
}

int main() {

    // length odf string

    char ch[100];

    cin >> ch;

    int len = findLength(ch, 100);

    cout << "Length of string is: " << len;

    // inbuild function
    cout << "Length of string is: " << strlen(ch);





    // // creation
    // char ch[100];

    // // input
    // cin >> ch;

    // // print 
    // cout << "Printing the value of ch: " << ch << endl;


    // // printing using loop
    // for(int i=0; i<10; i++) {
    //     cout << "At Index: " << i << " " << ch[i] << endl;
    // }

    // // type casting and null value => 0
    // char temp = ch[5];
    // int value = (int)temp;
    // cout << "Printing integer value: " << value << endl;
};