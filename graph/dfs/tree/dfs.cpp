#include <bits/stdc++.h>
using namespace std;
#define size 1000
vector<int> g[size];
int maxHeight[size];
int in[size];

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
    dfs1(1, 0);
    for (int i = 0; i < n; i++)
    {
        cout << in[i];
        in[u] = 0;

        for (int child : g[u])
        {

            if (child == parent)
                continue;

            dfs1(child, u);

            in[u] = max(in[u], 1 + in[child]);
        }
    }
}
}