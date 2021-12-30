/* Problem Statement
For a given two-dimensional integer array/list ‘ARR’ of size (N x M), print the ‘ARR’ in a sine wave order, i.e., print the first column top to bottom, next column bottom to top, and so on.

For eg:
The sine wave for the matrix:
1 2
3 4
will be [1, 3, 2, 4].

Input Format:
The first line contains an Integer 'T' which denotes the number of test cases or queries to be run. Then the test cases follow.
The first line of each test case contains two integer values, 'N' and 'M,’ separated by a single space. They represent the 'rows' and 'columns,’ respectively, for the two-dimensional array/list ‘ARR’.
The next ‘N’ line contains an ‘M’ single-separated integer denoting the value of ‘ARR’.

Output Format:
For each test case, print the two-dimensional array/list ‘ARR’ elements in the sine wave order in a single line, separated by a single space.
Output for every test case will be printed in a separate line. */

#include <iostream>
#include <vector>

using namespace std;
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;
    for (int col = 0; col < mCols; col++)
    {
        if (col & 1)
        {
            for (int row = nRows - 1; row >= 0; row--)
            {
                ans.push_back(arr[row][col]);
            }
        }
        else
        {
            for (int row = 0; row < nRows; row++)
            {
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}

int main() {}