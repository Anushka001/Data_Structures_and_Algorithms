/* Given a number, we have to return it in words form.
for example,
Input--> 560
Output--> Five Six Zero   */

#include <iostream>
using namespace std;

void sayDigit(int num, string arr[])
{
    // base case
    if (num == 0)
        return;

    // processing
    int digit = num % 10;
    num = num / 10;

    // recursive call
    sayDigit(num, arr);

    cout << arr[digit] << " ";
}

int main()
{
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int num;
    cout <<"Enter a number:" << endl;
    cin >> num;

    cout <<"The given digit in words form is:" << endl;
    sayDigit(num, arr);
    cout << endl;
    return 0;
}