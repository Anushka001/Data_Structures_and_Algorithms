/* Problem Statement
Given a sequence of numbers ‘ARR’. Your task is to return a sorted sequence of ‘ARR’ in non-descending order with help of the merge sort algorithm.

Input Format :
The first line of input contains an integer ‘T’ denoting the number of test cases.
The next 2*'T' lines represent the ‘T’ test cases.
The first line of each test case contains an integer ‘N’ which denotes the size of ‘ARR’.
The second line of each test case contains ‘N’ space-separated elements of ‘ARR’.

Output Format :
For each test case, print the numbers in non-descending order.  */

#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int s, int e)
{

    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copying values
    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    // merge them
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}
void solve(vector<int> &arr, int s, int e)
{
    // base case
    if (s >= e)
        return;

    int mid = s + (e - s) / 2;

    // sort left part
    solve(arr, s, mid);

    // sort right part
    solve(arr, mid + 1, e);

    // merge
    merge(arr, s, e);
}

void mergeSort(vector<int> &arr, int n)
{
    solve(arr, 0, n - 1);
}

int main() {}