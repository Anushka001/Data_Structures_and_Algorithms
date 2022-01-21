/* Given an array, create a function to find sum of all elements using Recursion*/

#include <iostream>
using namespace std;

int ArrSum(int arr[], int size)
{
    //base case
    if (size == 0)
        return 0;

    int temp = arr[0];
    temp = temp + ArrSum(arr + 1, size - 1);
    return temp;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    cout << ArrSum(arr, size) << endl;

    return 0;
}