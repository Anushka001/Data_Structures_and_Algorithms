/* Problem Statement
You have been given a sorted(in ascending order) integer array/list(ARR) of size N and an element X. Write a function to search this element in the given input array/list using 'Binary Search'. Return the index of the element in the input array/list. In case the element is not present in the array/list, then return -1.

Input Format :
The first line contains an Integer 'N' which denotes the size of the array/list.
Second line contains 'N' single space separated integers representing the elements in the array/list.
Third line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow..

All the 't' lines henceforth, will take the value of X to be searched for in the array/list.

Output Format :
For each test case, print the index at which X is present, -1 otherwise.
Output for every test case will be printed in a separate line.

Constraints :
1 <= t <= 10^4
0 <= N <= 10^6
0 <= X <= 10^9
Time Limit: 1 sec        */

int solve(int arr[], int s, int e, int k)
{

    int mid = s + (e - s) / 2;

    //base case

    // element not found
    if (s > e)
        return -1;

    // element found
    if (arr[mid] == k)
        return mid;

    if (arr[mid] < k) //search in right sub-array
    {
        return solve(arr, mid + 1, e, k);
    }

    else //search in left sub-array
    {
        return solve(arr, s, mid - 1, k);
    }
}

void binarySearch(int *input, int n, int val)
{
    int ans = solve(input, 0, n - 1, val);
}

int main() {}