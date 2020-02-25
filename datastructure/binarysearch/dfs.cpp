#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 3;
vector<int> g[N];
bool visited[N];

void dfs(int u)
{
    visited[u] = 1;
    for (int v : g[u])
    {
        if (visited[v])
            continue;
        dfs(v);
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
    dfs(1);
    if (visited[4])
    {
        /* code */
        cout << "yes";
    }
    else
    {

        cout << "No";
    }
}
