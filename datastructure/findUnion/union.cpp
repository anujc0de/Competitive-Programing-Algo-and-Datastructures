#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int find(int a[], int n)
{
    if (n == a[n])
        return n;
    return find(a, a[n]);
}

int unionfunction(int x[], int a, int b)
{
    int p = find(x, a);
    int q = find(x, b);
    if (p == q)
        exit;
    else
    {
        x[p] = q;
    }
};
int main()
{

    int a[100];
    a[1] = 3;
    a[3] = 2;
    a[2] = 2;
    a[4] = 6;
    a[6] = 6;
    unionfunction(a, 1, 1);
}