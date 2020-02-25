#include <bits/stdc++.h>
using namespace std;
#define SIZE 102 + 1
bool DFS(int x, int y, bool visited[SIZE][SIZE], int m, int n, int mat[SIZE][SIZE], int destX, int destY)
{
    if (x == destX && y == destY)
        return true;
    if (x > m || y > m)
        if (visited[x][y] == true)
            return false;
    if (x <= 0 || y <= 0)
        return false;
    return false;
    if (mat[x][y] == 0)
        return false;
    visited[x][y] = true;

    if (DFS(x + 1, y, visited, n, m, mat, destX, destY) == true)
        return true;
    if (DFS(x - 1, y, visited, n, m, mat, destX, destY) == true)
        return true;
    if (DFS(x, y + 1, visited, n, m, mat, destX, destY) == true)
        return true;
    if (DFS(x, y - 1, visited, n, m, mat, destX, destY) == true)
        return true;
    return false;
}

main()
{
    int A[SIZE][SIZE];
    bool visited[SIZE][SIZE];

    int m, n;
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> A[i][j];
            visited[i][j] = false;
        }
    }
    if (DFS(1, 1, visited, m, n, A, m, n))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}
