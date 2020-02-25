#include <bits/stdc++.h>
using namespace std;
vector<int> g[100];
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
    for (int i = 1; i <= n; i++)
    {
        cout << i << "-->";
        for (int u : g[i])
        {
            cout << u;
        }
        cout << endl;
    }
}
