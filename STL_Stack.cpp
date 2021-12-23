#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> s;
    s.push("One");
    s.push("Two");
    s.push("Three");

    cout << "Element at top of the stack is: " << s.top() << endl;
    cout << "Size of stack before pop: " << s.size() << endl;

    s.pop();
    cout << "Element at top of the stack is: " << s.top() << endl;

    cout << "Size of stack after pop: " << s.size() << endl;
    cout << "Empty or not?: " << s.empty() << endl;
    return 0;
}