#include <bits/stdc++.h>
using namespace std;
#define SIZE 100000 + 1
vector<pair<int, int>> g[SIZE];
int dist[SIZE];
bool vis[SIZE];
void disjkstra(int source)
{
    memset(vis, false, sizeof vis);
    dist[source] = 0;

    multiset<pair<int, int>> s;
    s.insert({0, source});
    while (!s.empty())
    {
        pair<int, int> p = *s.begin();
        s.erase(s.begin());
        int wt = p.first;
        int u = p.second;
        if (vis[u])
            continue;
        vis[u] = true;

        for (auto v : g[u])
        {

            if (dist[v.first] > dist[u] + v.second)
            {
                dist[v.first] = dist[u] + v.second;
                s.insert({dist[v.first], v.first});
            }
        }
    }
}

main()
{
    int virteces, edge;
    cin >> virteces >> edge;
    int u, v, wt;
    while (edge--)
    {

        cin >> u >> v >> wt;
        g[u].push_back({v, wt});
        g[v].push_back({u, wt});
    }
    for (int i = 0; i < SIZE; i++)
    {
        /* code */
        dist[i] = 9999;
    }

    disjkstra(0);
    cout << dist[2];
}
