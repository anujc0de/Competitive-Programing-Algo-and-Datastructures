#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 3;
vector<int> g[N];
bool visited[N];

void bfs(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = 1;
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        cout << v;
        for (int i : g[v])
        {
            if (!visited[i])
            {
                visited[i] = 1;
                q.push(i);
            }
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
    bfs(1);
}
