#include <bits/stdc++.h>
using namespace std;

typedef struct node
{
    struct node *left;
    int data;
    struct node *right;

} node;

node *root;

node *insert(int new_data)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = new_data;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}
void inOrder(node *root)
{
    if (root == NULL)
        return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
void preOrder(node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    inOrder(root->left);
    inOrder(root->right);
}
void postOrder(node *root)
{
    if (root == NULL)
        return;
    inOrder(root->left);
    inOrder(root->right);
    cout << root->data << " ";
}

int main()
{
    root = insert(3);
    root->right = insert(2);
    root->left = insert(1);
    root->right->right = insert(9);
    root->right->left = insert(10);
    cout << "inorder ->";
    inOrder(root);
    cout << "\n postordr ->";

    postOrder(root);
    cout << "\n pree Order ->";

    preOrder(root);

    return 0;
}