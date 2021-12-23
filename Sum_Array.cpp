#include <iostream>
using namespace std;

int SumArr(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cout << endl
         << "Enter size of array: " << endl;
    cin >> n;
    int arr[50];
    cout << endl
         << "Enter array elements: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << endl
         << "Sum of given array: " << SumArr(arr, n);
    return 0;
}