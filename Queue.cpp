#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // create a queue
    queue<int> q;
    q.push(1);
    cout << "Front: " << q.front() << endl;
    q.push(14);
    cout << "Front: " << q.front() << endl;
    q.push(18);
    cout << "Front: " << q.front() << endl;
    q.push(21);

    cout << "Size of queue is: " << q.size() << endl;

    q.pop();
    cout << "Size of queue is: " << q.size() << endl;

    if (q.empty())
        cout << "Queue is empty";
    else
        cout << "Queue is not empty";

    return 0;
}