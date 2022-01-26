#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void push_front(int value)
{
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void push_back(int value)
{
    Node* last = head;
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        while (last->next != NULL)
        {

            last = last->next;
        }
        last->next = newNode;
    }
}
int pop_front()
{
    if (head == NULL)
        return -1;
    Node *temp = head;
    int element = temp->data;
    head = temp->next;
    delete (temp);

    return element;
}

int pop_back()
{
    if (head == NULL)
        return -1;
    Node *temp = head;
    int element;
    if (head->next == NULL)
    {
        element = head->data;
        head = NULL;
        delete (temp);

        return element;
    }
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    element = temp->next->data;
    delete (temp->next);
    temp->next = NULL;

    return element;
}
void print()
{
    Node *temp = head;
    if (head == NULL)
    {
        cout << "Linked list is empty.";
    }
    else
    {
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}
int main()
{
    int choice;
    while (1)
    {
        cin >> choice;
        if (choice == 1)
        {
            int x;
            cout << "Enter value of element" << endl;
            cin >> x;
            push_front(x);
        }

        else if (choice == 2)
        {
            int x;
            cout << "Enter value of element" << endl;
            cin >> x;
            push_back(x);
        }
        else if (choice == 3)
        {
            print();
        }
        else if (choice == 4)
        {
            int x = pop_front();
            if (x != -1)
            {
                cout << x << " deleted from beginning successfully" << endl;
            }
            else
            {
                cout << "Linked list is empty.";
            }
        }
        else if (choice == 5)
        {
            int x = pop_back();
            if (x != -1)
            {
                cout << x << " deleted from end successfully" << endl;
            }
            else
            {
                cout << "Linked list is empty.";
            }
        }
        else
        {
            break;
        }
    }
    return 0;
}