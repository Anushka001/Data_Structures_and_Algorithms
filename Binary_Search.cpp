#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }

        else
        {
            start = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int even[6] = {12, 14, 25, 47, 89, 97};
    int odd[3] = {5, 8, 33};

    int evenIndex = BinarySearch(even, 6, 97);
    cout << "Index of 97 is: " << evenIndex << endl;

    int oddIndex = BinarySearch(odd, 3, 8);
    cout << "Index of 8 is: " << oddIndex << endl;

    return 0;
}