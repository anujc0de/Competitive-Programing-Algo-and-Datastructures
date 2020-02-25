#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    unsigned long long int x, y, r;
    cin >> n >> x;
    vector<unsigned long long int> v, t;
    for (int i = 0; i < n; i++)
    {
        cin >> y;
        v.push_back(y);
    }
    sort(v.begin(), v.end());
    copy(v.begin(), v.end(), back_inserter(t));
    reverse(v.begin(), v.end());
    unsigned long long int l = 0, s = x;
    if (v[0] <= s)
    {
        l++;
    }

    for (int i = 0; i < v.size(); i++)
    {
        s -= v[i];

        if (t[lower_bound(t.begin(), (t.end() - (i + 1)), s) - t.begin() - 1] <= s)
        {
            l++;
        }
        else
        {
            break;
        }
    }
    cout << l;
}
