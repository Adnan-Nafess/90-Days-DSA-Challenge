#include <iostream>
using namespace std;

int main() {
    // creation
    string name;

    // input 
    cin >> name;

    // print 
    cout << "Printing name: " << name << endl;

    cout << "Printing first character: " << name[0] << endl; 

    // length String
    cout << "Length of string: " << name.length() << endl;

    string str1 = "Mohd";
    string str2 = "Adnan";

    cout << "Before appending: " << endl;
    cout << str1 << endl;
    cout << str2 << endl;

    // append 
    str1.append(str2);

    cout << "After appending: "<< endl;
    cout << str1 << endl;
    cout << str2 << endl;

    return 0;
}