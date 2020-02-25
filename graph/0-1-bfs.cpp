#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> g[100];
int d[100] = {INT_MAX};
bool visited[100] = {false};

void bfs(int srart)
{
    deque<int> q;
    q.push_front(srart);

    while (!q.empty())
    {
        int u = q.front();
        d[u] = 0;
        q.pop_front();
        q.pop_front();
        for (int i = 0; i < g[u].size(); i++)
        {
            if (d[g[u][i].first] > d[u] + d[g[u][i].second])
            {
                d[g[u][i].first] = d[u] + g[u][i].second;
                if (g[u][i].second == 0)
                {
                    q.push_front(g[u][i].first);
                }
                else
                {
                    q.push_back(g[u][i].first);
                }
            }
        }
    }
}
int main()
{

    int n, m, w;
    cin >> n >> m;
    int u, v;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v >> w;
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }
    bfs(0);
    cout << d[4];
}
