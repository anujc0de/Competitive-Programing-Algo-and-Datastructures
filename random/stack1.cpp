#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, y;
    int count1 = 0, count2 = 0;
    stack<int> mystack;
    vector<int> parenthesis;
    cin >> n;
    int topelement;
    for (int i = 0; i < n; i++)
    {
        cin >> y;
        parenthesis.push_back(y);
    }

    int s = parenthesis.size();
    if (s == 1 || s == 0)
        cout << count2;

    else
    {
        mystack.push(parenthesis[0]);
        for (int i = 1; i < parenthesis.size(); i++)
        {
            if (!mystack.empty())
            {
                topelement = mystack.top();

                if ((topelement == abs(parenthesis[i])) && (parenthesis[i] < 0))
                {
                    count1++;
                    mystack.pop();
                }
                else
                {
                    mystack.push(parenthesis[i]);
                    count2 = max(count1, count2);
                    count1 = 0;
                }
            }
            else
            {
                mystack.push(parenthesis[i]);
                count2 = max(count1, count2);
                count1 = 0;
            }
        }
    }
    cout << (2 * max(count2, count1));
}