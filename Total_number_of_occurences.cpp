/* Find the total number of occurences of a gievn element in an array. Also find the element's first and last occurence in the array.*/

#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int key)
{

    int s = 0, e = n - 1, mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key)
{

    int s = 0, e = n - 1, mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int total(int arr[], int n, int key, int s, int e)
{
    int total = (e - s);
    return total;
}

int main()
{
    int even[8] = {1, 2, 3, 3, 3, 3, 3, 5};

    int first = firstOcc(even, 8, 3);
    int last = lastOcc(even, 8, 5);

    cout << "First Occurence of 3 is at index " << first << endl;
    cout << "Last Occurence of 3 is at index " << last << endl;
    cout << "Total number of occurences of 3 is: " << total(even, 8, 3, first, last) << endl;
    return 0;
}