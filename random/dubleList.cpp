#include <iostream>
#include <bits/stdc++.h>
#define N 100001
using namespace std;
struct LinkedList
{
    struct LinkedList *left;
    int data;
    struct LinedList *right;
};
typedef struct LinkedList *node;

node createNode()
{
    node temp;
    temp = (node)malloc(sizeof(struct LinkedList));
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

int main()
{
    node head = NULL;
}