#include <iostream>
#include <vector>
using namespace std;

int main() {
    // create a vector
    vector<int> v;
    vector<int> v1;

    // size and capacity
    cout << "Size of v: " << v.size() << endl;
    cout << "Capacity of v: " << v.capacity() << endl;
    v.push_back(2);
    v.push_back(3);
    v.push_back(10);
    cout << "Size of v: " << v.size() << endl;
    cout << "Capacity of v: " << v.capacity() << endl;

    //  Update Value
    v[1] = 5;
    cout << "Size of v1: " << v1.size() << endl;
    cout << "Capacity of v1: " << v1.capacity() << endl;

    // Delete Value from vector
    v1.pop_back();

}