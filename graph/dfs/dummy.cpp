#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 3;
int dist[N] = {INT_MAX};

typedef struct edge
{
    int src;
    int dest;
    int wt;
} edge;

main()
{
    edge e[1];
    e[0].src = 1;

    e[0].dest = 1;
    e[0].wt = 1;
    cout << e[0].dest << e[0].src << e[0].wt;
}
