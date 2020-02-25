#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<int, int> &a,
               const pair<int, int> &b)
{
    return (a.second < b.second);
}
vector<int> subsequence(vector<int> A, int B)
{
    vector<int> v;
    vector<pair<int, int>> t;
    pair<int, int> mypair;

    unordered_map<int, pair<int, int>> mymap;

    for (int i = 0; i < A.size() - 1; i++)
    {
        int sum = 0;
        for (int j = i + 1; j < A.size(); j++)
        {
            sum = A[i] + A[j];
            int len = i + j;
            if ((sum == B) && (mymap.find(len) == mymap.end()))
            {
                mypair = make_pair(i + 1, j + 1);
                mymap[len] = mypair;
            }
        }
    }
    if (mymap.size() == 0)
    {
        vector<int> a = {};
        return a;
    }
    else
    {

        for (auto x : mymap)
        {

            t.push_back(mymap[x.first]);
            cout << mymap[x.first].first << " " << endl;
            cout << mymap[x.first].second << " ";
        }
        cout << endl;

        sort(t.begin(), t.end(), sortbysec);
        for (int i = 0; i < t.size(); i++)
        {
            // "first" and "second" are used to access
            // 1st and 2nd element of pair respectively
            cout << t[i].first << " "
                 << t[i].second << endl;
        }

        // if (t[0].second == t[1].second)
        // {
        //     if (t[0].first < t[1].first)
        //     {
        //         v.push_back(t[0].first);
        //         v.push_back(t[0].second);
        //     }
        //     else
        //     {
        //         v.push_back(t[1].first);
        //         v.push_back(t[1].second);
        //     }
        // }
        // else
        // {
        // }
        v.push_back(t[0].first);
        v.push_back(t[0].second);

        return v;
    }
}

int main()
{
    vector<int> A{10, -7, -9, -7, 5, -10, -3, -1, 2, 4, 7, -6, -8, 4, 3, 10, -9, 4, 9, -1, -5, -8, 7, 2, 8, -10, 1, 7, -7, -7, 9, 0, 0, -5, -1, 7, -6, 0, 5, 2, -8, 1, -5, -8, -4, -9, 1, -10, 2, 10, -5, 4, -3, 9, -2, 7, 5, -8, -7, 0, 9, 3, -3, 9, -4, 6, 2, 6, 2};
    vector<int> v;
    int target = 4;

    v = subsequence(A, target);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}