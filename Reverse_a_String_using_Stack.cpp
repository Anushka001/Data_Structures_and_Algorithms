/* Reverse a string using Stack
Property of stack: it always returns the given input in reverse order as it follows the property of LIFO [last in first out]
*/
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string str = "Anushka";

    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        s.push(ch);
    }

    string ans = "";

    while (!s.empty())
    {
        char ch = s.top();
        ans.push_back(ch);

        s.pop();
    }

    cout << "Reversed string is: " << ans << endl;
    return 0;
}