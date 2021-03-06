/* Problem Statement
For a given Singly Linked List of integers, sort the list using the 'Merge Sort' algorithm.

Input Format:
The first and the only line of input contains the elements of the linked list separated by a single space.

Remember/Consider:
While specifying the list elements for input, -1 indicates the end of the singly linked list and hence, would never be a list element

Output Format:
The only line of output contains the sorted elements of the Singly Linked List in a row, separated by a single space.

Sample Input 1:
1 4 5 2 -1

Sample Output 1:
1 2 4 5     */

#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

node *findMid(node *head)
{
    node *slow = head;
    node *fast = head->next;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

node *merge(node *left, node *right)
{
    if (left == NULL)
        return right;

    if (right == NULL)
        return left;

    node *ans = new node(-1);
    node *temp = ans;

    // merge 2 sorted LL
    while (left != NULL && right != NULL)
    {
        if (left->data < right->data)
        {
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else
        {
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }
    while (left != NULL)
    {
        temp->next = left;
        temp = left;
        left = left->next;
    }
    while (right != NULL)
    {
        temp->next = right;
        temp = right;
        right = right->next;
    }

    ans = ans->next;
    return ans;
}
node *mergeSort(node *head)
{
    // base case
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    // breaking linked lists int two halves by finding mid
    node *mid = findMid(head);

    node *left = head;
    node *right = mid->next;
    mid->next = NULL;

    // recursive calls to solve both halves
    left = mergeSort(left);
    right = mergeSort(right);

    // merge both left and right halves
    node *result = merge(left, right);
    return result;
}

int main() {}