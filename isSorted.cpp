/* Given an array, create a function to check if it is sorted or not, using Recursion*/

#include <iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
    //base case
    if (size == 0 || size == 1)
        return true;

    if (arr[0] > arr[1])
        return false;
    else
    {
        bool remPart = isSorted(arr + 1, size - 1);
        return remPart;
    }
}
int main()
{
    int arr[5] = {12, 4, 16, 8, 9}, size = 5;
    bool ans = isSorted(arr, size);

    if (ans)
        cout << "Array is sorted" << endl;
    else
        cout << "Array is not sorted" << endl;
    return 0;
}