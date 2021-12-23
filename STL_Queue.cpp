#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> q;
    q.push("One");
    q.push("Two");
    q.push("Three");

    cout << "Element at top of the stack is: " << q.front() << endl;
    cout << "Size of queue before pop: " << q.size() << endl;
    q.pop();
    cout << "Element at top of the stack is: " << q.front() << endl;

    cout << "Size of queue after pop: " << q.size() << endl;

    cout << "Empty or not?: " << q.empty() << endl;
    return 0;
}