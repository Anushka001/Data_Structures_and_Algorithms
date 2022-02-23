/* Problem Statement
You are having a stack "ARR" of size 'N+1', your task is to delete the middlemost element so that the size of resulting stack is 'N'.

Example:
INPUT: ARR [ ] = [ 1 , 2 , 3 , 4 , 5 ] , N = 4
OUTPUT: ARR [ ] = [ 1 , 2 , 4,  5 ]

The above example contains an odd number of elements, hence the middle element is clearly the (N+1) / 2th element, which is removed from the stack in the output.

INPUT: ARR [ ] = [ 5, 6, 7, 8 ] , N = 3
OUTPUT: ARR [ ] = [ 5, 7, 8 ]

The above example contains an even number of elements, so out of the two middle elements, we consider the one which occurs first. Hence, the middle element would be ((N+1) / 2 - 1) element, which is 6 and is removed from the stack in the output.

Input Format:
The first line of input contains an integer 'T' representing the number of the test case. Then the test case follows.
The first line of each test case contains an integer 'N', where 'N+1' denotes the number of elements in the stack initially.
The second line of each test case contains 'N+1' space-separated integers, denoting the elements of the stack.

Output Format:
For every test case, print 'N' space-separated integer, denoting the elements in the stack after removing the middle element from the input stack.
The output of every test case will be printed in a separate line.   */

#include <iostream>
#include <stack>
using namespace std;
void delMid(stack<int> &inputStack, int count, int size)
{
    // base case
    if (count == size / 2)
    {
        inputStack.pop();
        return;
    }
    int num = inputStack.top();
    inputStack.pop();

    // Recursive call
    delMid(inputStack, count + 1, size);

    inputStack.push(num);
}

void deleteMiddle(stack<int> &inputStack, int N)
{
    int count = 0;
    delMid(inputStack, count, N);
}

int main() {}