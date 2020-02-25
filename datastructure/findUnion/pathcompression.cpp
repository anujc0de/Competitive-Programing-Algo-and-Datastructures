#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int parent[100];
int find(int a)
{
    if (parent[a] < 0)
        return a;
    parent[a] = find(parent[a]);
    return parent[a];
}
int main()
{
    int a;
    find(a);
}