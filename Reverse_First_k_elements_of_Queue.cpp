/* Given an integer K and a queue of integers, we need to reverse the order of the first K elements of the queue, leaving the other elements in the same relative order.

Only following standard operations are allowed on queue.

enqueue(x): Add an item x to rear of queue
dequeue(): Remove an item from front of queue
size(): Returns number of elements in queue.
front(): Finds front item.

Note: The above operations represent the general processings. In-built functions of the respective languages can be used to solve the problem.

Example 1:
Input:
5 3
1 2 3 4 5

Output:
3 2 1 4 5

Explanation:
After reversing the given input from the 3rd position the resultant output will be 3 2 1 4 5.

Your Task:
Complete the provided function modifyQueue that takes queue and k as parameters and returns a modified queue. The printing is done automatically by the driver code.

Expected Time Complexity : O(n)
Expected Auxiliary Space : O(n)     */

// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k);
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0)
        {
            int a;
            cin >> a;
            q.push(a);
        }
        queue<int> ans = modifyQueue(q, k);
        while (!ans.empty())
        {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends

// User function Template for C++

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k)
{
    // add code here.
    // step 1: pop first k elements from queue and add in stack
    stack<int> s;
    for (int i = 0; i < k; i++)
    {
        int val = q.front();
        q.pop();
        s.push(val);
    }

    // step 2: fetch from stack and push in queue
    while (!s.empty())
    {
        int val = s.top();
        s.pop();
        q.push(val);
    }

    // step 3: fetch first (n-k) elements from queue and push_back
    int t = q.size() - k;

    while (t--)
    {
        int val = q.front();
        q.pop();
        q.push(val);
    }
    return q;
}
