/* Problem Statement
You want to play with your friend, but your friend has pending homework, help him complete that.
You are given a ‘Head’ of a sorted linked list. You can remove some values from the linked list. In the end, you must return a sorted linked list that contains no adjacent values that are equal.

For Example:
If the given linked list is: 1 -> 2 -> 2 -> 3

Then we will delete the duplicate value ‘2’ present in the linked list, and finally return the following list:
1 -> 2 -> 3

Input Format:
The first line contains a single integer ‘T’ denoting the number of test cases, then each test case follows:
The first and only line of each test case contains the elements of the first linked list separated by a single space and terminated by -1. Hence, -1 would never be a list element.

Output Format:
For each test case, print the final linked list. The elements of the linked list must be separated by a single space and terminated by -1.
Output for each test case will be printed in a separate line.   */

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *uniqueSortedList(Node *head)
{
    // empty list
    if (head == NULL)
        return NULL;

    // non-empty list
    Node *curr = head;

    while (curr != NULL)
    {
        if ((curr->next != NULL) && curr->data == curr->next->data)
        {
            Node *next_next = curr->next->next;
            Node *nodeToDel = curr->next;
            delete (nodeToDel);
            curr->next = next_next;
        }
        else
        {
            curr = curr->next;
        }
    }

    return head;
}

int main() {}