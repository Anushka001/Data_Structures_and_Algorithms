/* Problem Statement

You are given an unsorted array consisting of N non-negative integers. Your task is to sort the array in non-decreasing order using the Selection Sort algorithm.

Input Format:
The first line of input contains an integer 'T' representing the number of test cases. Then the test case follows.
The first line of each test case contains integer 'N' denoting the size of the array.
The second line of each test case contains 'N' single space-separated integers representing the array elements.

Output Format:
The only line of output of each test case should contain the given array sorted in non-decreasing order. */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main()
{
}
