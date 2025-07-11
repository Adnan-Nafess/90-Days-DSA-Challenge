#include <iostream>
using namespace std;

void countZeroOne(int arr[], int size)
{
    int zeroCount = 0;
    int oneCount = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zeroCount++;
        }
        if (arr[i] == 1)
        {
            oneCount++;
        }
    }

    cout << "Zero Count: " << zeroCount << endl;
    cout << "One Count: " << oneCount << endl;
}

int main()
{
    int arr[10] = {0, 0, 0, 1, 0, 0, 1, 1, 0, 1};
    int size = 10;

    countZeroOne(arr, size);
    return 0;
};