#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 3;
vector<int> g[N];
bool visited[N];
int a[N];
int dp[N];

void dfs(int u, int par)
{
    dp[u] = a[u];
    int mx = 0;
    for (int child : g[u])
    {
        if (child == par)
            continue;
        dfs(child, u);
        mx = max(mx, dp[child]);
    }
    dp[u] += mx;
}
int main()
{
    int n, u, v;
    cin >> n;

    for (int i = 1; i < n - 1; i++)
    {
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for (int i = 1; i < n + 1; i++)
    {
        cin >> a[i];
    }

    dfs(1, 0);
    cout << dp[1];
}
