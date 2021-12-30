/* Given an m x n matrix, return all elements of the matrix in spiral order.
1 -> 2 -> 3
          |
4 -> 5    6
|         |
7 <- 8 <- 9

Example 1
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5] */

#include <iostream>
#include <vector>

using namespace std;
class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {

        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();

        int count = 0;
        int total = row * col;

        int startRow = 0;
        int startCol = 0;
        int endRow = row - 1;
        int endCol = col - 1;

        while (count < total)
        {
            for (int index = startCol; count < total && index <= endCol; index++)
            {
                ans.push_back(matrix[startRow][index]);
                count++;
            }
            startRow++;

            for (int index = startRow; count < total && index <= endRow; index++)
            {
                ans.push_back(matrix[index][endCol]);
                count++;
            }
            endCol--;

            for (int index = endCol; count < total && index >= startCol; index--)
            {
                ans.push_back(matrix[endRow][index]);
                count++;
            }
            endRow--;

            for (int index = endRow; count < total && index >= startRow; index--)
            {
                ans.push_back(matrix[index][startCol]);
                count++;
            }
            startCol++;
        }
        return ans;
    }
};

int main() {}