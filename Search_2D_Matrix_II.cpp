/*Write an efficient algorithm that searches for a target value in an m x n integer matrix. The matrix has the following properties:
Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.

Example 1:
Input: matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]], target = 5
Output: true  */

#include <iostream>
#include <vector>

using namespace std;
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int row = matrix.size();
        int col = matrix[0].size();

        int rowIndex = 0;
        int colIndex = col - 1;

        while (rowIndex < row && colIndex >= 0)
        {
            int element = matrix[rowIndex][colIndex];
            if (element == target)
            {
                return 1;
            }
            if (element < target)
            {
                rowIndex++;
            }
            else
            {
                colIndex--;
            }
        }
        return 0;
    }
};

int main() {}