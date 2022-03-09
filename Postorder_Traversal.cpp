#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{
    cout << "Enter the data for node: " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if(data == -1)
        return NULL;


    cout <<"Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);

    cout <<"Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;
    
}

void inorder(node* root){
    //base case
    if(root == NULL)
        return;

    inorder(root->left);
    inorder(root->right);
    cout << root->data <<" ";

}

int main()
{
    node *root = NULL;

    // building tree
    root = buildTree(root);

    cout <<"Inorder traversal: " ;
    inorder(root);

    return 0;
}