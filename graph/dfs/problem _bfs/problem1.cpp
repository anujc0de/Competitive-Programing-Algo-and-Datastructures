#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 3;
vector<int> g[N];
int visited[N] = {0};
int dist[N] = {0};

void bfs(int start)
{
    queue<int> q;
    q.push(start);
    visited[start] = 1;

    while (!q.empty())
    {

        int v = q.front();
        q.pop();
        for (int i : g[v])
        {
            if (visited[i] == 0)
            {
                dist[i] = dist[v] + 1;
                visited[i] = 1;
                q.push(i);
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        /* code */
        int n, m, u, v;
        cin >> n >> m;
        while (m--)
        {
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }

        bfs(1);
        cout << dist[n] << endl;
        fill(dist, dist + N, 0);
        fill(visited, visited + N, 0);
        for (int i = 0; i <= n; i++)
        {
            g[i].clear();
        }
    }
}
