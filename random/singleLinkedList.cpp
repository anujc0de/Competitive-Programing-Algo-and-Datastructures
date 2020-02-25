#include <iostream>
#include <bits/stdc++.h>
#define N 100001
using namespace std;

struct LinkedList
{
    int data;
    struct LinkedList *next;
};
typedef struct LinkedList *node;
node createNode()
{
    node temp;
    temp = (node)malloc(sizeof(struct LinkedList));
    temp->next = NULL;
    return temp;
}
node addNode(node head, int value)
{
    node temp, p;
    temp = createNode();
    temp->data = value;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        p = head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = temp;
    }
    return head;
}
void printRevers(node q, node p)
{
    if (q == p)
        return;
    else
    {
        printRevers(q->next, p);
        cout << q->data << " ";
    }
}
int main()
{
    node head = NULL;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        head = addNode(head, x);
    }

    node p = head;
    while (p != NULL)
    {
        node q, r;

        if ((p->data) % 2 == 0)
        {
            q = p;
            p = p->next;
            while (p != NULL && (p->data) % 2 == 0)
            {
                p = p->next;
            }

            printRevers(q, p);
        }
        else
        {
            cout << p->data << " ";
            p = p->next;
        }
    }
}