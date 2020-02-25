#include <bits/stdc++.h>
using namespace std;
#define size 1000
vector<int> g[size];
bool visited[size];
int in[size];

int x;
void findLeaf(int child, int count, int maxHieght)
{
    count++;
    visited[child] = true;

    for (auto u : g[child])
    {
        if (!visited[u])
        {
            if (count > maxHieght)
            {
                maxHieght = count;
                x = u;
            }
            findLeaf(u, count, maxHieght);
        }
    }
}
void dfs1(int u, int parent)
{
    in[u] = 0;

    for (int child : g[u])
    {

        if (child == parent)
            continue;

        dfs1(child, u);

        in[u] = max(in[u], 1 + in[child]);
    }
}

int main()
{
    int m, n;
    int u, v;
    memset(visited, false, sizeof visited);
    cin >> m >> n;
    for (int i = 0; i < size; i++)
    {
        in[i] = 0;
    }

    while (n--)
    {
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    findLeaf(1, 0, INT_MIN);
    dfs1(x, 0);
    cout << in[x];
}