/* Given a tring, reverse it using Recursion*/

#include <iostream>
using namespace std;

void reverseStr(string& str, int i, int j)
{
    // base case
    if(i > j)
        return;

    swap(str[i], str[j]);
    i++;
    j--;

    reverseStr(str, i, j);

}
int main()
{ 
    string str = "abcde";
    reverseStr(str, 0, str.length()-1);
    cout << str << endl;

    return 0;
}