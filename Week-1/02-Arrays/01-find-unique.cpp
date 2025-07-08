#include <iostream>
using namespace std;

// Using XOR to find the unique element in an array

// void findUnique(int arr[], int size) {
//     int unique = 0;
//     for(int i=0; i<size; i++) {
//         unique ^= arr[i];
//     }
//     cout << "Unique element is: " << unique << endl;
// }

// using a  loop
void findUnique(int arr[], int size) {
    for (int i = 0; i < size; i++) {
    int num = arr[i];
    int count = 0;
    for (int j = 0; j < size; j++) {
      if (arr[j] == num) {
        count++;
      }
    }
    if (count == 1) {
      cout << "Unique element is: " << num << endl;
    }
  }
}

int main() {
    // find unique element in an array
    int arr[] = {1, 2, 3, 2, 1, 4, 5, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    findUnique(arr, size);

    return 0;
}