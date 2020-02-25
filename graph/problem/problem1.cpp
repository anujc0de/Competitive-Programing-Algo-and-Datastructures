#include <bits/stdc++.h>
using namespace std;
vector<int> g[100];
bool visited[100] = {false};
int level[100] = {0};

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : g[u])
        {
            if (!visited[v])
            {
                visited[v] = true;
                level[v] = level[u] + 1;
                q.push(v);
            }
        }
    }
}
int main()
{

    int n, m;
    cin >> n >> m;
    int u, v;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        g[u].push_back(v);
    }
    bfs(1);
    for (int i = 1; i <= n; i++)
    {
        cout << level[i] << " ";
    }
}
