#include <iostream>
#include <limits.h>
using namespace std;

bool linearSearch(int arr[], int size, int target) {

  for (int i = 0; i < size; i++) {
    if (arr[i] == target) {
      return true;
    }
  }
  return false;
}

void countZeroOne(int arr[], int size) {
  int zeroCount = 0;
  int oneCount = 0;

  for (int i = 0; i < size; i++) {
    if (arr[i] == 0) {
      zeroCount++;
    }
    if (arr[i] == 1) {
      oneCount++;
    }
  }

  cout << "Zero Count: " << zeroCount << endl;
  cout << "One Count: " << oneCount << endl;
}

void minimumNumberArr(int arr[], int size) {
  int minVal = INT_MAX;

  for(int i=0; i<size; i++) {
    if(arr[i] < minVal){
      minVal = arr[i];
    }
  }

  cout << "Minimum number is: " << minVal << endl;
}

void reverseArray(int arr[], int size) {
  int start = 0;
  int end = size -1;

  while(start <= end) {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }

  for(int i=0; i<size; i++) {
    cout << arr[i] << " ";
  }
}

void extremePrint(int arr[], int size) {
  int left = 0; 
  int right = size -1;

  while(left <= right) {
    if(left == right) {
      cout << arr[left] << endl;
    }else {
      cout << arr[left] << endl;
      cout << arr[right] << endl;
      left++;
      right--;
    }
  }
}

int main() {

  int arr[] = {10, 20, 30, 40, 50, 60};
  int size = 6;

  extremePrint(arr, size);

  // int arr[] = {10, 20, 30, 40, 50, 60};
  // int size = 6;

  // reverseArray(arr, size);

  // int arr[] = {10, 8, 31, 4, 3, 1, 51};
  // int size = 7;

  // minimumNumberArr(arr, size);

  // int arr[10] = {0, 0, 0, 1, 0, 0, 1, 1, 0, 1};
  // int size = 10;

  // countZeroOne(arr, size);

  // int arr[5] = {2, 4, 6, 8, 10};
  // int size = 5;
  // int target = 6;

  // bool ans = linearSearch(arr, size, target);

  // if(ans == 1) {
  //   cout<<"Target found"<<endl;
  // }else {
  //   cout<<"Target not found"<<endl;
  // }

  // int arr[5] = {1, 2, 3, 4, 5};
  // int n = 5;

  // for(int i=0; i<n; i++) {
  //   cout << arr[i] << " ";
  // }

  // cout << "Address of arr is: " << arr << endl;
  // cout << "Size of arr is: " << sizeof(arr) << endl;

  // Taking input from user
  // int arr[5];
  // int n = 5;
  // for (int i = 0; i < n; i++) {
  //   cout << "Enter the value of arr: " << i << " ";
  //   cin >> arr[i];
  //   cout << endl;
  // }

  // Printing the doubled array

  // cout << "Printing the array: " << endl;

  // for(int i=0; i<n; i++) {
  //   cout << 2*arr[i] <<  " ";
  // }

  // Taking input from user
  // int arr[5];
  // int n = 5;
  // for (int i = 0; i < n; i++) {
  //   cout << "Enter the value of arr: " << i << " ";
  //   cin >> arr[i];
  //   cout << endl;
  // }

  // Printing the array of sum

  // cout << "Printing the array: " << endl;
  // int sum = 0;
  // for (int i = 0; i < n; i++) {
  //   sum += arr[i];
  // }
  // cout << "Sum of the array is: " << sum << endl;

  // Linear Search
  // int arr[5] = {2, 4, 6, 8, 10};
  // int n = 5;
  // int key = 6;
  // bool flag = false;

  // for (int i = 0; i < n; i++) {
  //   if (arr[i] == key) {
  //     flag = true;
  //     break;
  //   }
  // }

  // if (flag == true) {
  //   cout << "Element found" << endl;
  // } else {
  //   cout << "Element not found" << endl;
  // }
}