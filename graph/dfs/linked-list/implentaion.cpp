#include <bits/stdc++.h>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
} node;
node *head;

void insert(int new_data)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
}

void display()
{
    node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

void reverse(node *p)
{
    if (!p)
        return;

    reverse(p->next);
    cout << p->data << " ";
}

int main()
{
    insert(3);
    insert(1);
    insert(7);
    insert(2);
    insert(9);
    cout << "The linked list is: ";
    display();
    cout << "the linked list in reverse->";
    reverse(head);
    return 0;
}