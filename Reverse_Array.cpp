#include <iostream>
using namespace std;

int ReverseArr(int arr[], int size)
{
    cout << endl
         << "Array after reversing: " << endl;
    for (int i = size - 1; i >= 0; i--)
    {
        cout << " " << arr[i];
    }
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 22};
    cout << endl
         << "Array before reversing: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << " " << arr[i];
    }
    ReverseArr(arr, 10);
    return 0;
}