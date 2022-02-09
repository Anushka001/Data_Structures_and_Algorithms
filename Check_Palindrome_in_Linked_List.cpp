/* Problem Statement
Given a singly linked list of size N of integers. The task is to check if the given linked list is palindrome or not.

Example 1:

Input:
N = 3
value[] = {1,2,1}

Output:
1

Explanation: The given linked list is 1 2 1 , which is a palindrome and Hence, the output is 1.   */

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
/* Link list Node */

struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Solution
{
private:
    bool checkPalindrome(vector<int> arr)
    {
        int n = arr.size();
        int s = 0, e = n - 1;

        while (s <= e)
        {
            if (arr[s] != arr[e])
                return 0;

            s++;
            e--;
        }
        return 1;
    }

public:
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        // step 1: create array
        vector<int> arr;

        // step 2: copy the content of LL in array
        Node *temp = head;
        while (temp != NULL)
        {
            arr.push_back(temp->data);
            temp = temp->next;
        }

        // check if palindrome or not
        return checkPalindrome(arr);
    }
};

/* Driver program to test above function*/
int main()
{
    int T, i, n, l, firstdata;
    cin >> T;
    while (T--)
    {

        struct Node *head = NULL, *tail = NULL;
        cin >> n;
        // taking first data of LL
        cin >> firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for (i = 1; i < n; i++)
        {
            cin >> l;
            tail->next = new Node(l);
            tail = tail->next;
        }
        Solution obj;
        cout << obj.isPalindrome(head) << endl;
    }
    return 0;
}
