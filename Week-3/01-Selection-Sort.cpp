#include <iostream>
using namespace std;


int main() {
    int arr[6] = {10, 4, 1, 3, 2, 7};
    int n = 6;

   for(int i=0; i<n-1; i++) {
     int index = i;

     for(int j=i+1; j<n; j++) {
        if(arr[j] < arr[index]) {
            index = j;
        }
     }
      swap(arr[i], arr[index]);                                                                                    
   }

   for(int i=0; i<n; i++) {
     cout << arr[i] <<  " ";
   }

};


