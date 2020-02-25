#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
void factor(int n)
{
    int x;
    stack<int> s;
    vector<int> v;

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if (i != (sqrt(n)))
            {
                x = (n / i);
                s.push(x);
            }
        }
    }
    while (!s.empty())
    {

        v.push_back(s.top());
        s.pop();
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
int main()
{

    vector<int> s;

    int n;
    cin >> n;

    factor(n);
}