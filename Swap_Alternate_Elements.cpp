/* Print an array in which the alternate elements are swapped*/

#include <iostream>
using namespace std;

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void SwapAlt(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{
    int even[8] = {5, 2, 9, 4, 7, 6, 1, 0};
    int odd[5] = {55, 6, 7, 10, 2};

    SwapAlt(even, 8);
    printArr(even, 8);

    SwapAlt(odd, 5);
    printArr(odd, 5);
    return 0;
}