/* Problem Statement
Reverse a given stack of integers using recursion.

Note:
You are not allowed to use any extra space other than the internal stack space used due to recursion.
You are not allowed to use the loop constructs of any sort available as handy. For example: for, for-each, while, etc.
The only inbuilt stack methods allowed are:
push(x) -- Push element x onto stack.
pop() -- Removes the element on top of the stack.
top() -- Get the top element.

Input Format:
The first line of input contains an integer value N, denoting the size of the input Stack.
The second line contains N single space-separated integers, denoting the stack elements, where the last (Nth) element is the TOP most element of Stack.

Output Format:
N single space-separated integers in a single line, where the first integer denotes the TOP element of the reversed stack.  */

#include <iostream>
#include <stack>
using namespace std;
void insertAtBottom(stack<int> &stack, int element)
{
    // base case
    if (stack.empty())
    {
        stack.push(element);
        return;
    }
    int num = stack.top();
    stack.pop();

    // recursive call
    insertAtBottom(stack, element);
    stack.push(num);
}

void reverseStack(stack<int> &stack)
{
    // base case
    if (stack.empty())
        return;

    int num = stack.top();
    stack.pop();

    // recursive call
    reverseStack(stack);

    insertAtBottom(stack, num);
}

int main() {}