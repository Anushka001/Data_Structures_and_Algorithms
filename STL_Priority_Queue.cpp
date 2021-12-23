#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // this is based on max heap. Which means that whenever we fetch an element from this queue, that element will be the greatest element of the queue.

    priority_queue<int> maxi;                            // max heap
    priority_queue<int, vector<int>, greater<int>> mini; // min heap

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(8);

    cout << "Max Heap:" << endl;
    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    mini.push(10);
    mini.push(5);
    mini.push(4);
    mini.push(0);

    cout << "Min Heap:" << endl;
    int m = mini.size();
    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;

    cout << "Empty?: " << maxi.empty() << endl;
    cout << "Empty?: " << mini.empty() << endl;
    return 0;
}