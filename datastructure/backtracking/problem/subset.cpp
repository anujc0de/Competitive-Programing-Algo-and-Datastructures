#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subsetfind(vector<int> &v, vector<vector<int>> &res, vector<int> &sub, int index)

{
    res.push_back(sub);
    for (int i = index; i < v.size(); i++)
    {
        sub.push_back(v[i]);
        subsetfind(v, res, sub, i + 1);
        sub.pop_back();
    }
    return res;
}

vector<vector<int>> findsubset(vector<int> &v)
{
    vector<vector<int>> x = {{}};
    if (v.size() == 0)
    {
        return x;
    }
    else
    {
        vector<int> subset;
        vector<vector<int>> res;
        sort(v.begin(), v.end());
        res = subsetfind(v, res, subset, 0);
        return res;
    }
}

int main()
{

    vector<int> v = {};
    vector<vector<int>> a;

    a = findsubset(v);
    for (int i = 0; i < a.size(); i++)
    {
        /* code */
        for (int j = 0; j < a[i].size(); j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
}