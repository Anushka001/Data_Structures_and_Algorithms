#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void push_front(struct Node **head, int value)
{
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

int printNthfromLast(struct Node *head, int n)
{
    int len = 0, i;
    struct Node *temp = head;

    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }

    if (len < n)
        return 0;

    temp = head;
    for (i = 1; i < len - n + 1; i++)
    {
        temp = temp->next;
    }
    cout << temp->data;
    return 1;
}
int main()
{
    struct Node *head = NULL;
    int total_element, temp, i, n;
    cin >> total_element;

    for (i = 0; i < total_element; i++)
    {
        cin >> temp;
        push_front(&head, temp);
    }

    cin >> n;

    if (0 == (printNthfromLast(head, n)))
        cout << "No node found" << endl;

    return 0;
}