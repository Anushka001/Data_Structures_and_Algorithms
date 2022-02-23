/* Problem Statement
You are given a stack/deque of integers 'MY-STACK' and an integer ‘X’. Your task is to insert ‘X’ to the bottom of ‘MY-STACK’ and return the updated stack/deque.

Note:
If ‘MY_STACK’ = [7, 1, 4, 5], then the first element represents the element at the bottom of the stack and the last element represents the element at the top of the stack.

For Example:
Let ‘MY_STACK’ = [7, 1, 4, 5] and ‘X’ = 9. So, ‘MY_STACK’ after insertion becomes [9, 7, 1, 4, 5].

Follow Up:
Try to do this without using any other data structure.

Input Format:
The first line of input contains a single integer T’, representing the number of test cases.
The first line of each test case contains two single space-separated numbers, ‘N’ and ‘X’, denoting the size of ‘MY_STACK’ and the integer to be inserted at the bottom, respectively.
The second line contains ‘N’ space-separated distinct integers denoting the stack/deque elements.

Output Format:
For each test case, print the elements of the updated ‘MY_STACK’ separated by a single space.
The output of every test case will be printed in a separate line.   */

#include <iostream>
#include <stack>
using namespace std;

void pushElem(stack<int> &myStack, int x)
{
    // base case
    if (myStack.empty())
    {
        myStack.push(x);
        return;
    }
    int num = myStack.top();
    myStack.pop();

    // recursive call
    pushElem(myStack, x);
    myStack.push(num);
}

stack<int> pushAtBottom(stack<int> &myStack, int x)
{
    pushElem(myStack, x);
    return myStack;
}

int main() {}