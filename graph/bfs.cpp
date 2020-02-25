#include <bits/stdc++.h>
using namespace std;
vector<int> g[100];
bool visited[100] = {false};

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    while (!q.empty())
    {
        int u = q.front();
        cout << u << "";
        q.pop();
        for (int v : g[u])
        {
            if (!visited[v])
            {
                visited[v] = true;
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
}
