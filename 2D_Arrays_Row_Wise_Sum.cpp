/* If you have an array like:
3 4 11
2 12 1
7 8 7

then generate sum of each row like
row 1 = 3+4+11 = 18
row 2 = 2+12+1 = 15
row 3 = 7+8+7 = 22
*/

#include <iostream>
using namespace std;

void rowSum(int arr[][3], int n, int m){
        cout << "The sum of elements of each row is" << endl;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
}
int main()
{
    int arr[3][3];
    cout << "Enter array elements:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout<<"The array elements are:" << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    rowSum(arr, 3, 3);

    return 0;
}