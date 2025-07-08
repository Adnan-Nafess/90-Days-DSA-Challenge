#include <iostream>
#include <limits.h>
using namespace std;

void minimumNumberArr(int arr[], int size)
{
    int minVal = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < minVal)
        {
            minVal = arr[i];
        }
    }

    cout << "Minimum number is: " << minVal << endl;
};

int main()
{
    int arr[] = {10, 8, 31, 4, 3, 1, 51};
    int size = 7;

    minimumNumberArr(arr, size);
}
