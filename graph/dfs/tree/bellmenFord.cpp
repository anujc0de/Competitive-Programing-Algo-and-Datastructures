
#include <iostream>
#define MAX 1000
using namespace std;
typedef struct edge
{
    int src;
    int dest;
    int wt;
} edge;

void bellman_ford(int nv, edge e[], int src_graph, int ne)
{
    int u, v, weight, i, j = 0;
    int dis[MAX];

    for (i = 0; i < nv; i++)
    {
        dis[i] = INT16_MAX;
    }

    dis[src_graph] = 0;

    for (i = 0; i < nv - 1; i++)
    {
        for (j = 0; j < ne; j++)
        {
            u = e[j].src;
            v = e[j].dest;
            weight = e[j].wt;

            if (dis[u] + weight < dis[v])
            {
                dis[v] = dis[u] + weight;
            }
        }
    }

    cout << "\nVertex"
         << "  Distance from source";
    for (i = 0; i < nv; i++)
    {
        cout << "\n"
             << i << "\t" << dis[i];
    }
}
int main()
{
    int nv, ne, src_graph;
    edge e[MAX];

    cin >> nv >> ne;

    for (int i = 0; i < ne; i++)
    {

        cin >> e[i].src;
        cin >> e[i].dest;
        cin >> e[i].wt;
    }

    bellman_ford(nv, e, 0, ne);

    return 0;
}