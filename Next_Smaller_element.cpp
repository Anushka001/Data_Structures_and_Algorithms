/* Problem Statement
You are given an array 'ARR' of integers of length N. Your task is to find the next smaller element for each of the array elements.
Next Smaller Element for an array element is the first element to the right of that element which has a value strictly smaller than that element.
If for any array element the next smaller element does not exist, you should print -1 for that array element.

Input Format:
The first line of input contains an integer ‘T’ which contains the number of test cases.
The first line of each test case contains an integer 'N' denoting the number of elements in the array 'ARR'.
The second line of each test case contains 'N' space-separated integers denoting the array 'ARR'.

Output Format:
For each test case, print a single line containing 'N' space-separated integers denoting the value of Next Smaller Element for each of the 'N' array elements.
The output for each test case will be printed in a separate line.   */

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--)
    {
        int curr = arr[i];
        while (s.top() >= curr)
        {
            s.pop();
        }

        // answer is top of stack
        ans[i] = s.top();
        s.push(curr);
    }
    return ans;
}

int main() {}