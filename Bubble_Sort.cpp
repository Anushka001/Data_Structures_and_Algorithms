/* Problem Statement
You are given an unsorted array consisting of N non-negative integers. Your task is to sort the array in non-decreasing order using the Bubble Sort algorithm.

Input Format:
The first line of input contains an integer 'T' representing the number of test cases.
Then the test case follows.
The first line of each test case contains integer N denoting the size of the array.
The second line of each test case contains 'N' space-separated integers representing the array elements

Output Format:
The only line of output of each test case should print the sorted array in increasing order.
Output for each test case will be printed in a separate line. */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

int main() {}