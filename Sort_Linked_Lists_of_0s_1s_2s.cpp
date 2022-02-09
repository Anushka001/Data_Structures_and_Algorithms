/* Problem Statement
You are given a linked list having N number of nodes and each node will have an integer which can be 0, 1, or 2. You have to sort the given linked list in ascending order.

For Example:
Let the linked list be 1→0→2→1→2.
The sorted linked list for the given linked list will be 0→1→1→2→2.

Input Format:
The first line of input contains an integer ‘T’, denoting the number of test cases.
The first and only line of each test case will have space-separated integers denoting the elements of the linked list and terminated by -1. Hence, -1 would never be a list element.

Output Format :
For each test case, the sorted linked lists will be printed in separate lines.  */

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

void insertAtTail(Node *&tail, Node *curr)
{
    tail->next = curr;
    tail = curr;
}
Node *sortList(Node *head)
{
    Node *zero_head = new Node(-1);
    Node *zero_tail = zero_head;
    Node *one_head = new Node(-1);
    Node *one_tail = one_head;
    Node *two_head = new Node(-1);
    Node *two_tail = two_head;
    Node *curr = head;

    while (curr != NULL)
    {
        int val = curr->data;

        if (val == 0)
        {
            insertAtTail(zero_tail, curr);
        }
        else if (val == 1)
        {
            insertAtTail(one_tail, curr);
        }
        else if (val == 2)
        {
            insertAtTail(two_tail, curr);
        }
        curr = curr->next;
    }

    if (one_head->next != NULL)
        zero_tail->next = one_head->next;
    else
        zero_tail->next = two_head->next;

    one_tail->next = two_head->next;
    two_tail->next = NULL;

    head = zero_head->next;

    delete zero_head;
    delete one_head;
    delete two_head;

    return head;
}

int main() {}