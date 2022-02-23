/* Problem Statement
You’re given a stack consisting of 'N' integers. Your task is to sort this stack in descending order using recursion.
We can only use the following functions on this stack S.
is_empty(S): Tests whether stack is empty or not.
push(S): Adds a new element to the stack.
pop(S): Removes top element from the stack.
top(S): Returns value of the top element. Note that this function does not remove elements from the stack.

Note:
1) Use of any loop constructs like while, for..etc is not allowed.
2) The stack may contain duplicate integers.
3) The stack may contain any integer i.e it may either be negative, positive or zero.

Input Format:
The first line of the input contains an integer 'T' denoting the number of test cases. Then 'T' test cases follow.
The first line of each test case contains an integer 'N', the number of elements in the stack.
The second line of each test contains 'N' space separated integers.

Output Format:
The only line of output of each test case should contain 'N' space separated integers denoting the stack in a sorted order. */

#include <iostream>
#include <stack>
using namespace std;
void sortedInsert(stack<int> &stack, int num)
{
    // base case
    if (stack.empty() || (!stack.empty() && stack.top() < num))
    {
        stack.push(num);
        return;
    }
    int n = stack.top();
    stack.pop();

    // recursive call
    sortedInsert(stack, num);
    stack.push(n);
}

void sortStack(stack<int> &stack)
{
    // base case
    if (stack.empty())
        return;

    int num = stack.top();
    stack.pop();

    // recursive call
    sortStack(stack);
    sortedInsert(stack, num);
}

int main() {}