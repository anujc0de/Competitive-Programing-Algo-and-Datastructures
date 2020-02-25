#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//here we will store -1 -1 .....-1 corresponding to the given element onece the parent have any child
//then -1+-1 idon and child will asign th parent value;
int parent[100];

int find(int a)
{
    while (parent[a] > 0)

        a = parent[a];
    return a;
}
void unionFunction(int a, int b)
{
    a = find(a);
    b = find(b);
    parent[a] += parent[b];
    parent[b] = a;
}

int main()
{
    int n, a, b, m;

    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        parent[i] = -1;

    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        a = find(a);
        b = find(b);
        if (a != b)
            unionFunction(a, b);
    }
    for (int i = 1; i <= n; i++)
    {
        cout << parent[i] << " ";
    }
}