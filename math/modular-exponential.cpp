#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int moduloExponential(int x, int n, int m)

{
    int y;
    if (n == 0)
        return 1;
    else if (n % 2 == 0)
    {
        y = moduloExponential(x, n / 2, m);
        return ((y * y) % m);
    }
    else
    {
        return ((x % m) * moduloExponential(x, n - 1, m)) % m;
    }
}

int main()
{

    int x, n, m;
    cin >> x >> n >> m;
    cout << moduloExponential(x, n, m);
}