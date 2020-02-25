#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int maxsize = INT_MAX;
int find(int a[], int n)
{
    if (n == a[n])
        return n;
    return find(a, a[n]);
}
int main()
{
    int a[100];
    a[1] = 3;
    a[3] = 2;
    a[2] = 2;
    a[5] = 2;
    a[4] = 5;
    cout << find(a, 4);
}