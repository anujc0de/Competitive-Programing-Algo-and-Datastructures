#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<unsigned long long> v;
    vector<unsigned long long> s;
    unsigned long long n, q;
    cin >> n >> q;
    unsigned long long l, r;
    for (unsigned long long i = 0; i < n; i++)
    {
        cin >> l >> r;
        for (unsigned long long j = l; j <= r; j++)
        {
            v.push_back(j);
        }
    }

    unsigned long long x;
    for (unsigned long long i = 0; i < q; i++)
    {
        cin >> x;
        s.push_back(x);
    }
    for (unsigned long long i = 0; i < s.size(); i++)
    {
        cout << v[s[i] - 1] << endl;
    }
}