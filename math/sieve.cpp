#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void sieve(int n)
{
    memset(a, true, sizeof(a));
    bool a[n + 1];
    vector<int> v;

    for (int p = 2; p * p <= n; p++)
    {
        if (a[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
            {
                a[i] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++)

    {
        if (a[i] == true)
            v.push_back(i);
    }
    return v;
}

int main()
{
    int n;
    cout << "enter the no ";
    cin >> n;
    sieve(n);
}