/* Given an array, create a function to implement Linear Search*/

#include <iostream>
using namespace std;

bool LinearSearch(int arr[], int size, int k)
{
    //base case
    if (size == 0)
        return false;

    if (arr[0] == k)
        return true;
    else
    {
        bool RemPart = LinearSearch(arr + 1, size - 1, k);
        return RemPart;
    }
}
int main()
{
    int arr[5] = {3, 2, 5, 1, 6};
    int size = 5;
    int key = 12;
    bool ans = LinearSearch(arr, size, key);

    if(ans)
        cout << "Element present in array" << endl;
    else
        cout << "Element not present in array" << endl;
    return 0;
}