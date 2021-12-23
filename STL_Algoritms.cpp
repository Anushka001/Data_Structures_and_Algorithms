#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(8);
    v.push_back(9);

    // Binary Search
    cout << "Is element present?: " << binary_search(v.begin(), v.end(), 6) << endl;
    cout << "Is element present?: " << binary_search(v.begin(), v.end(), 5) << endl;

    cout << "Lower bound: " << lower_bound(v.begin(), v.end(), 8) - v.begin() << endl;
    cout << "Upper bound: " << upper_bound(v.begin(), v.end(), 8) - v.begin() << endl;

    int a = 3, b = 5;
    cout << "Max of a and b: " << max(a, b) << endl;
    cout << "Min of a and b: " << min(a, b) << endl;

    cout << endl
         << "Before swapping" << endl;
    cout << "a is: " << a << " and"
         << " b is: " << b << endl;

    swap(a, b);

    cout << endl
         << "After swapping" << endl;
    cout << "a is: " << a << " and"
         << " b is: " << b << endl;

    string abcd = "abcd";
    cout << endl
         << "Before reversing" << endl;
    cout << "String is: " << abcd << endl;

    reverse(abcd.begin(), abcd.end());

    cout << endl
         << "After reversing" << endl;
    cout << "String is: " << abcd << endl;

    // rotate
    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "After rotating" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}