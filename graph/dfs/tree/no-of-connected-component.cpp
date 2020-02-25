#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 3;
vector<int> g[N];
bool visited[N] = {false};

void dfs(int u)
{
    visited[u] = true;
    for (int v : g[u])
    {
        if (!visited[v])
        {
            dfs(v);
        }
    }
}
int main()
{
    int n, m, u, v;
    cin >> n >> m;
    while (m--)
    {
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int connectedComponent = 0;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == false)
        {
            dfs(i);
            connectedComponent++;
        }
    }
    cout << "no of connected component is:  " << connectedComponent;
}
