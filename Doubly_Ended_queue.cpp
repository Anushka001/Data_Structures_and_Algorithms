/* Problem Statement
Design a data structure to implement deque of size ‘N’. It should support the following operations:

pushFront(X): Inserts an element X in the front of the deque. Returns true if the element is inserted, otherwise false.
pushRear(X): Inserts an element X in the back of the deque. Returns true if the element is inserted, otherwise false.
popFront(): Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
popRear(): Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
getFront(): Returns the first element of the deque. If the deque is empty, it returns -1.
getRear(): Returns the last element of the deque. If the deque is empty, it returns -1.
isEmpty(): Returns true if the deque is empty, otherwise false.
isFull(): Returns true if the deque is full, otherwise false.

Following types of queries denote these operations:
Type 1: for pushFront(X) operation.
Type 2: for pushRear(X) operation.
Type 3: for popFront() operation.
Type 4: for popRear() operation.
Type 5: for getFront() operation.
Type 6: for getRear() operation.
Type 7: for isEmpty() operation.
Type 8: for isFull() operation.

Input Format:
The first line of input contains two space-separated integers ‘N’ and ‘Q’ denoting the size of the deque and the number of queries to be performed, respectively.
The next ‘Q’ lines specify the type of operation/query to be performed on the data structure.
Each query contains an integer ‘P’ denoting the type of query.
For the query of type 1 and 2, the integer ‘P’ is followed by a single integer ‘X’ denoting the element on which operation is to be performed.
For the queries of type 3 to 8, a single integer ‘P’ is given, denoting the type of query.

Output Format:
For each query, print the output returned after performing the corresponding operation on the data structure. */

#include <iostream>
#include <queue>
using namespace std;

class Deque
{
    int *arr;
    int front, rear, size;

public:
    // Initialize your data structure.
    Deque(int n)
    {
        // Write your code here.
        size = n;
        arr = new int[n];
        front = -1;
        rear = -1;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        // Write your code here.
        // check if queue is full
        if (isFull())
        {
            return false;
        }
        // first element
        else if (isEmpty())
        {
            front = rear = 0;
        }
        else if (front == 0 && rear != size - 1) // maintain cyclic nature
        {
            front = size - 1;
        }
        else
            front--;

        arr[front] = x;
        return true;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
        // Write your code here.
        // check if queue is full
        if (isFull())
        {
            return false;
        }
        // first element
        else if (isEmpty())
        {
            front = rear = 0;
        }
        else if (rear == size - 1 && front != 0) // maintain cyclic nature
        {
            rear = 0;
        }
        else
            rear++;

        arr[rear] = x;
        return true;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
        // Write your code here.
        if (isEmpty())
        { // to check queue is empty
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        if (front == rear)
        { // single element in queue
            front = rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0; // to maintain cyclic nature
        }
        else
        {
            front++;
        }
        return ans;
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
        // Write your code here.
        if (isEmpty())
        { // to check queue is empty
            return -1;
        }
        int ans = arr[rear];
        arr[rear] = -1;
        if (front == rear)
        { // single element in queue
            front = rear = -1;
        }
        else if (rear == 0)
        {
            rear = size - 1; // to maintain cyclic nature
        }
        else
        {
            rear--;
        }
        return ans;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        // Write your code here.
        if (isEmpty())
        {
            return -1;
        }
        return arr[front];
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        // Write your code here.
        if (isEmpty())
        {
            return -1;
        }
        return arr[rear];
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        // Write your code here.
        if (front == -1)
            return true;
        else
            return false;
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
        // Write your code here.
        if ((front == 0 && rear == size - 1) || (front != 0 && rear == (front - 1) % (size - 1)))
        {
            return true;
        }
        else
            return false;
    }
};

int main() {}