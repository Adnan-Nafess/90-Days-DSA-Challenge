#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int target)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return true;
        }
    }
    return false;
};

int main()
{
    // Linear Search
    int arr[5] = {2, 4, 6, 8, 10};
    int n = 5;
    int key = 6;
    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            flag = true;
            break;
        }
    }

    if (flag == true)
    {
        cout << "Element found is : " << key << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    // int arr[5] = {2, 4, 6, 8, 10};
    // int size = 5;
    // int target = 6;

    // bool ans = linearSearch(arr, size, target);

    // if(ans == 1) {
    //   cout<<"Target found"<<endl;
    // }else {
    //   cout<<"Target not found"<<endl;
    // }

    return 0;
};
