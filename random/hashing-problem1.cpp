#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> subsequence(vector<int> A)
{

    vector<int> value;

    unordered_map<int, vector<int>> mymap;

    for (int i = 0; i < A.size(); i++)
    {
        for (int j = i; j < A.size(); j++)
        {
            int maxvalue = INT_MIN;
            int res = 0;

            for (int k = i; k <= j; k++)
            {
                res += A[k];
                value.push_back(A[k]);
            }
            if (res == 0)
            {
                if (mymap.find(value.size()) == mymap.end())
                    mymap[value.size()] = value;
            }
            value.clear();
        }
    }
    int maxlen = INT_MIN;

    for (auto x : mymap)
    {
        if (x.first > maxlen)
        {
            maxlen = x.first;
        }
    }

    return mymap[maxlen];
}

int main()
{
    vector<int> A{1, 2, -2, 4, -4};
    vector<int> v;

    v = subsequence(A);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}