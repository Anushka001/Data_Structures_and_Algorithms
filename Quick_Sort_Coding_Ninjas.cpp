/* Problem Statement
You are given an array of integers. You need to sort the array in ascending order using quick sort.
Quick sort is a divide and conquer algorithm in which we choose a pivot point and partition the array into two parts i.e, left and right. The left part contains the numbers smaller than the pivot element and the right part contains the numbers larger than the pivot element. Then we recursively sort the left and right parts of the array.

Input Format:
The first line of input contains an integer 'T' denoting the number of queries or test cases. 
The first line of each input consists of an integer 'N' denoting the size of the array.
The second line of each input consists of 'N' space-separated integers denoting the elements of the array.

Output Format:
For each test case, print a single line containing space-separated integers denoting the elements of the array after sorting.
The output of each test case will be printed in a separate line.  */


#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& arr, int s, int e)
{

    int pivot = arr[s];
    int count = 0;

    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
            count++;
    }

    // placing pivot at its right position
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    // left and right part sorting
    int i = s, j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void QuickSort(vector<int>& arr, int s, int e)
{
    // base case
    if (s >= e)
        return;

    // partition

    int p = partition(arr, s, e);

    // sort left side
    QuickSort(arr, s, p - 1);

    // sort right side
    QuickSort(arr, p + 1, e);
}


vector<int> quickSort(vector<int> arr)
{
    QuickSort(arr, 0, arr.size() - 1);
    return arr;
}

int main() {}