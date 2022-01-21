/* Given an array, create a function to implement Binary Search*/

#include <iostream>
using namespace std;

bool BinarySearch(int arr[], int s, int e, int k)
{

    int mid = s + (e - s) / 2;

    //base case

    // element not found
    if (s > e)
        return false;

    // element found
    if (arr[mid] == k)
        return true;

    if (arr[mid] < k) //search in right sub-array
    {
        return BinarySearch(arr, mid + 1, e, k);
    }

    else //search in left sub-array
    {
        return BinarySearch(arr, s, mid - 1, k);
    }
}

int main()
{
    int arr[6] = {2, 4, 6, 10, 14, 16};
    int size = 6;
    int key = 2;

    cout << "Present or not (0 for FALSE, 1 for TRUE): " << BinarySearch(arr, 0, 5, key) << endl;

    return 0;
}